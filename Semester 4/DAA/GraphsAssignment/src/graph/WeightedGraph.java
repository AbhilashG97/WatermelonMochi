package graph;


import java.util.Arrays;
import java.util.HashMap;

public class WeightedGraph {

	private HashMap<Integer, String> vertexValues;
	
	/**
	 * Compare the edges of the graph
	 */
	
	public class Edge implements Comparable<Edge> {
		public int source;
		public int destination;
		public int weight;

		public int compareTo(Edge compareEdge) {
			return this.weight-compareEdge.weight;
		}
	}

	class subset {
		int parent, rank;
	}

	private int vertices, edges;    
	public Edge edgeArray[]; 

	private void setVertexValues() {
		vertexValues.put(1, "A");
		vertexValues.put(2, "B");
		vertexValues.put(3, "C");
		vertexValues.put(4, "D");
		vertexValues.put(5, "E");
		vertexValues.put(6, "F");
		vertexValues.put(7, "G");
	}
	
	public WeightedGraph(int v, int e) {
		vertexValues = new HashMap<>();
		setVertexValues();
		vertices = v;
		edges = e;
		edgeArray = new Edge[edges];
		for (int i=0; i<e; ++i) {
			edgeArray[i] = new Edge();
		}
	}
	
	public int find(subset subsets[], int i) {
		if (subsets[i].parent != i) {
			subsets[i].parent = find(subsets, subsets[i].parent);
		}
		return subsets[i].parent;
	}

	public void Union(subset subsets[], int x, int y) {
		int xroot = find(subsets, x);
		int yroot = find(subsets, y);

		if (subsets[xroot].rank < subsets[yroot].rank)
			subsets[xroot].parent = yroot;
		else if (subsets[xroot].rank > subsets[yroot].rank)
			subsets[yroot].parent = xroot;

		else {
			subsets[yroot].parent = xroot;
			subsets[xroot].rank++;
		}
	}

	/**
	 * Creates a Minimum Spanning Tree
	 */

	public void KruskalMST() {
		Edge result[] = new Edge[vertices];  
		int e = 0;  
		int i = 0;  
		for (i=0; i<vertices; ++i)
			result[i] = new Edge();

		Arrays.sort(edgeArray);

		subset subsets[] = new subset[vertices];
		for(i=0; i<vertices; ++i)
			subsets[i]=new subset();

		for (int v = 0; v < vertices; ++v) {
			subsets[v].parent = v;
			subsets[v].rank = 0;
		}

		i = 0; 

		while (e < vertices - 1) {

			Edge next_edge = new Edge();
			next_edge = edgeArray[i++];

			int x = find(subsets, next_edge.source);
			int y = find(subsets, next_edge.destination);

			if (x != y) {
				result[e++] = next_edge;
				Union(subsets, x, y);
			}
		}

		System.out.println("Following are the edges in " + 
				"the constructed MST");
		int cost = 0;
		for (i = 0; i < e; ++i) {
			cost+=result[i].weight;
			System.out.println("("+vertexValues.get(result[i].source) +" ,"+ 
					vertexValues.get(result[i].destination)+")");
		}
		System.out.println("Its cost is "+cost);
	}

	public void setValue(int index, 
			int source,
			int destination,
			int weight) {
		 edgeArray[index].source = source;
		 edgeArray[index].destination = destination;
		 edgeArray[index].weight = weight;
	}
	

}
