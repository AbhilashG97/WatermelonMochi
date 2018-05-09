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

		try(BufferedReader reader = new BufferedReader(new FileReader(new File("src\\input.dat")))) {
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
					//System.out.print(vertex + "" + element+" ");
					graph.addDirectedEdge(vertex, Integer.valueOf(element));
				}
				++i;
			}

			if(count == 7) {
				System.out.println();
				graph.topologicalSort();
				System.out.println();

				ArrayList<String> sortedValues = new ArrayList<>();

				for(Integer j : graph.getSortedValues()) {
					sortedValues.add(vertexValues.get(j));
				}

				new DisplayData<String>(sortedValues).getjFrame().setVisible(true);
				break;
			}

			System.out.println();
			vertex++;
			count++;
		}

	} 

	/**
	 * Creates a Minimum Spanning Tree from a connected and undirected graph
	 */

	private static void createMinimumSpanningTree() {

		ArrayList<Integer> sourceList = new ArrayList<>(), 
				destinationList = new ArrayList<>(),
				weightList = new ArrayList<>();

		int count = 1, vertex = 1, numberOfEdges = 0, lineCount = 1;

		for(String value : adjacentVertices) {

			if(lineCount >= 15) {
				//System.out.println(lineCount);

				// End of graph input reached
				if(count == 7) {
					break;
				}

				Scanner scanner = new Scanner(value);
				scanner.useDelimiter("\\s+");

				numberOfEdges += Integer.valueOf(scanner.next());  // get the total number of edges in the graph
				int i= 0;

				while(scanner.hasNext()) {
					String element = scanner.next();
					if(i % 2 == 0) {					
						System.out.print(vertex + "" + element+" ");
						destinationList.add(Integer.valueOf(element));
						sourceList.add(Integer.valueOf(vertex));
					}else {
						weightList.add(Integer.valueOf(element));
					}
					++i;
				}
				System.out.println();
				vertex++;
				count++;
			}

			lineCount++;
		}

		WeightedGraph weightedGraph = new WeightedGraph(8, numberOfEdges);
		for(int j=0; j<destinationList.size(); j++) {
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
		undirectedGraph.resetGraph();

		int count = 1, vertex = 1, sourceVertex = 0, lineCount = 1;

		for(String value : adjacentVertices) {

			if(lineCount >= 22) {

				Scanner scanner = new Scanner(value);
				scanner.useDelimiter("\\s+");

				//System.out.println(lineCount);

				if(count == 8) {
					sourceVertex = Integer.valueOf(scanner.next()); // get the source vertex
					System.out.println(count+" "+sourceVertex);
					undirectedGraph.printArticulationPoints(sourceVertex);
					break;
				} else {
					scanner.next(); // get rid of the first elements
				}

				int i= 0;

				while(scanner.hasNext()) {

					String element = scanner.next();
					if(i % 2 == 0) {					
						System.out.print(vertex + "" + element+" ");
						undirectedGraph.addUndirectedEdge(vertex, Integer.valueOf(element));
					}

					++i;
				}
				System.out.println();
				vertex++;
				count++;
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

		try {createMinimumSpanningTree();} catch(Exception e) {}  // Minimum spanning tree
		System.out.println();

		findArticulationPoints(); // find the articulation points in graph
		System.out.println();

		findStronglyConnectedComponents(); // find strongly connected components in a graph
		System.out.println();
	}

}
