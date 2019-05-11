package demo;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

import displaydata.DisplayData;
import graph.Graph;
import graph.WeightedGraph;

public class Demo {

	private static HashMap<Integer, String> vertexValues;
	private static ArrayList<String> adjacentVertices;

	public Demo() {
		adjacentVertices = new ArrayList<>();
		readFromFile();
		vertexValues = new HashMap<>();
		setVertexValues();
	}

	private static void setVertexValues() {
		vertexValues.put(1, "A");
		vertexValues.put(2, "B");
		vertexValues.put(3, "C");
		vertexValues.put(4, "D");
		vertexValues.put(5, "E");
		vertexValues.put(6, "F");
		vertexValues.put(7, "G");
	}

	public static void readFromFile() {

		// Reads from the input.dat input file line by line and stores the String values
		// in an ArrayList

		try(BufferedReader reader = new BufferedReader(new FileReader(new File("src/input.dat")))) {
			String line;
			while((line = reader.readLine()) != null) {
				adjacentVertices.add(line);
			}
		}catch (IOException ioe) {
			ioe.printStackTrace();
		}
	}

	/**
	 * Topologically sorts a Directed Acyclic Graph 
	 */
	private static void doTopologicalSort() {

		Graph graph = new Graph(8); 

		int count = 1, vertex = 1;

		// Reads each of the String values from the ArrayList

		for(String value : adjacentVertices) {

			Scanner scanner = new Scanner(value);
			scanner.useDelimiter("\\s+");

			scanner.next();  // get rid of the first digit;
			int i=0;

			while(scanner.hasNext()) {
				String element = scanner.next();
				if(i % 2 == 0) {					
					graph.addDirectedEdge(vertex, Integer.valueOf(element));
				}
				++i;
			}

			if(count == 7) {
				graph.topologicalSort();

				ArrayList<String> sortedValues = new ArrayList<>();

				for(Integer j : graph.getSortedValues()) {
					sortedValues.add(vertexValues.get(j));
				}

				new DisplayData<String>(sortedValues).getjFrame().setVisible(true);
				break;
			}
			vertex++;
			count++;
		}

	} 

	/**
	 * Creates a Minimum Spanning Tree from a connected and undirected graph
	 */

	private static void createMinimumSpanningTree() {
		
		Graph testGraph = new Graph(8);
		
		ArrayList<Integer> sourceList = new ArrayList<>(), 
				destinationList = new ArrayList<>(),
				weightList = new ArrayList<>();

		int vertex = 1, lineCount = 1;

		for(String value : adjacentVertices) {

			if(lineCount >= 15 && lineCount <= 21) {
				
				Scanner scanner = new Scanner(value);
				scanner.useDelimiter("\\s+");
				
				scanner.next(); // get rid of the first integer in a line 
				  
				int i= 0;

				while(scanner.hasNext()) {
					String element = scanner.next();
					if(i % 2 == 0) {					
						testGraph.addDirectedEdge(vertex, Integer.valueOf(element));
						destinationList.add(Integer.valueOf(element));
						sourceList.add(Integer.valueOf(vertex));
					}else {
						weightList.add(Integer.valueOf(element));
					}
					++i;
				}
				System.out.println();
				vertex++;
			}
			lineCount++;
		}
		testGraph.printGraph();
		System.out.println(testGraph.getNumberOfEdges());
		WeightedGraph weightedGraph = new WeightedGraph(8, testGraph.getNumberOfEdges());
		
		for(int j=0; j<8; j++) {
			weightedGraph.setValue(j, 
					sourceList.get(j), 
					destinationList.get(j),
					weightList.get(j));
		}
		weightedGraph.KruskalMST();
	}


	/*
	 * To find the articulation points of a connected, undirected graph
	 */
	public static void findArticulationPoints() {

		Graph undirectedGraph = new Graph(9);

		int vertex = 1, sourceVertex = 0, lineCount = 1;
		for(String value : adjacentVertices) {

			if(lineCount >= 22 && lineCount <=37) {

				Scanner scanner = new Scanner(value);
				scanner.useDelimiter("\\s+");

				if(lineCount == 29) {
					// Graph 4
						sourceVertex = Integer.valueOf(scanner.next()); // get the source vertex
						System.out.println("For the fourth graph, the articulation points are: ");
						undirectedGraph.printArticulationPoints(sourceVertex);
						undirectedGraph.clearAdjacencyList();
						vertex = 0;
				} else if (lineCount == 37) {
					// Graph 5
						sourceVertex = Integer.valueOf(scanner.next()); // get the source vertex
						System.out.println("For the fourth graph, the articulation points are: ");
						undirectedGraph.printArticulationPoints(sourceVertex);
						break;	
				} else {
					scanner.next(); // get rid of the first elements
				}

				int i = 0;

				while(scanner.hasNext()) {

					String element = scanner.next();
					if(i % 2 == 0) {					
						//System.out.print(vertex + "" + element+" ");
						undirectedGraph.addDirectedEdge(vertex, Integer.valueOf(element));
					}
					++i;
				}
				System.out.println();
				vertex++;				
			}
			lineCount++;
		}

	} 

	/*
	 * To find the Strongly connected components of a directed graph
	 */
	public static void findStronglyConnectedComponents() {

		Graph directedGraph = new Graph(8);

		int count = 1, vertex = 1, lineCount = 1;

		for(String value : adjacentVertices) {

			if(lineCount >= 38) {

				Scanner scanner = new Scanner(value);
				scanner.useDelimiter("\\s+");

				scanner.next();  // remove first value in the String
				int i= 0;

				while(scanner.hasNext()) {
					String element = scanner.next();
					if(i % 2 == 0) {					
						//System.out.print(vertex + "" + element+" ");
						directedGraph.addDirectedEdge(vertex, Integer.valueOf(element));
					}
					++i;
				}

				// End of graph input reached
				if(count == 7) {
					System.out.println();
					directedGraph.printSCCs();
					break;
				}

				System.out.println();
				vertex++;
				count++;
			}

			lineCount++;
		}
	}


	public static void main(String[] args) {

		new Demo();

		doTopologicalSort(); // Topological sort of a DAG
		
		try {
			createMinimumSpanningTree(); // Minimum spanning tree
		}catch (RuntimeException re) {
			System.err.println(re);
		} 
		System.out.println();

		findArticulationPoints(); // find the articulation points in graph
		System.out.println();

		findStronglyConnectedComponents(); // find strongly connected components in a graph
		System.out.println();
	}

}
