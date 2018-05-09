package graph;

import java.util.List;
import java.util.Queue;
import java.util.Stack;
import java.util.Vector;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;

public class Graph {
	
	private HashMap<Integer, String> vertexValues;
	private int vertices, time;
	private List<Integer> adjacencyList[];
	private int[] inDegreeList;
	private boolean[] visited;
	private ArrayList<Integer> sortedValues;
	private static final int NIL = -1;
	
	private void setVertexValues() {
		vertexValues.put(1, "A");
		vertexValues.put(2, "B");
		vertexValues.put(3, "C");
		vertexValues.put(4, "D");
		vertexValues.put(5, "E");
		vertexValues.put(6, "F");
		vertexValues.put(7, "G");
	}
	
	public Graph(int numberOfVertices) {
		time = 0;
		vertices = numberOfVertices;
		sortedValues = new ArrayList<>();
		visited = new boolean[numberOfVertices];
		inDegreeList = new int[numberOfVertices];
		Arrays.fill(visited, false);
		
		vertexValues = new HashMap<>();
		setVertexValues();
		
		adjacencyList = new ArrayList[numberOfVertices];
		
		for(int i=0; i< numberOfVertices; i++) {
			adjacencyList[i] = new ArrayList<>();
		}
	}
	
	public void addDirectedEdge(int v, int u) {
		adjacencyList[v].add(u);
	}
	
	public void addUndirectedEdge(int v, int u) {
		adjacencyList[v].add(u);
		adjacencyList[u].add(v);
	}
	
	public void printGraph() {
		for(int i=0; i < vertices; i++) {
			System.out.print(i+" -> ");
			for(Integer adjacentVertex : adjacencyList[i]) {
				System.out.print(adjacentVertex+" ");
			}
			System.out.println();
		}
	}
	
	/*
	 * Clear the adjacency list
	 */
	public void clearAdjacencyList() {
		for(int i=0; i< vertices; i++) {
			adjacencyList[i].clear();
		}
	}
	
    public void DFSUtil(int v, boolean visited[]) {
        // Mark the current node as visited and print it
        visited[v] = true;
        System.out.print(vertexValues.get(v) + " ");
 
        int n;
 
        // Recur for all the vertices adjacent to this vertex
        Iterator<Integer> i =adjacencyList[v].iterator();
        while (i.hasNext()) {
            n = i.next();
            if (!visited[n])
                DFSUtil(n,visited);
        }
    }
	
    
	/*
	 *  Do Topological sorting 
	 */
	public void topologicalSort() {

        for(int i = 0; i < vertices; i++) {
            ArrayList<Integer> temp = (ArrayList<Integer>) adjacencyList[i];
            for(int node : temp) {
                inDegreeList[node]++;
            }
        }
         
        Queue<Integer> queue = new LinkedList<Integer>();
        for(int i = 0;i < vertices; i++) {
            if(inDegreeList[i]==0)
                queue.add(i);
        }
         
        int count = 0;
         
        Vector <Integer> topOrder = new Vector<Integer>();

        while(!queue.isEmpty()) {
            int u=queue.poll();
            topOrder.add(u);

            for(int node : adjacencyList[u]) {
            
                if(--inDegreeList[node] == 0)
                	queue.add(node);
            }
            count++;
        }
               
        if(count != vertices) {
            System.err.println("Cycle Present");
            return;
        }
                   
        for(int i : topOrder) {
            System.out.print(i+" ");
            sortedValues.add(i);
        }
        System.out.println();
    }

	
	public ArrayList<Integer> getSortedValues() {
		return sortedValues;
	}
	
	public void setSortedValues(ArrayList<Integer> sortedValues) {
		this.sortedValues = sortedValues;
	}
	
	/*
	 * @param null
	 * @return null
	 * resets the graph
	 */
	public void resetGraph() {
		clearAdjacencyList();
		Arrays.fill(visited, false);
		vertices = time = 0;
	}
	

	/*
	 * Get articulation points using DFS traversal 
	 * @param u The vertex to be visited next
	 * @param visited[] Keeps track of visited vertices
	 * @param disc[] Stores discovery times of visited vertices
	 * @param parent[]  Stores parent vertices in DFS tree
	 * @param ap[] Store articulation points
	 */
    void getArticulationPoints(int u, boolean visited[], int disc[],
                int low[], int parent[], boolean articulationPointList[]) {
 
        // Count of children in DFS Tree
        int children = 0;
 
        // Mark the current node as visited
        visited[u] = true;
 
        // Initialize discovery time and low value
        disc[u] = low[u] = ++time;
 
        // Go through all vertices adjacent to this
        Iterator<Integer> i = adjacencyList[u].iterator();
        while (i.hasNext()) {
            int v = i.next();  // v is current adjacent of u
 
            // If v is not visited yet, then make it a child of u
            // in DFS tree and recur for it
            if (!visited[v]) {
                children++;
                parent[v] = u;
                getArticulationPoints(v, visited, disc, low, parent, articulationPointList);
 
                // Check if the subtree rooted with v has a connection to
                // one of the ancestors of u
                low[u]  = Math.min(low[u], low[v]);
 
                // u is an articulation point in following cases
 
                // u is root of DFS tree and has two or more children.
                if (parent[u] == NIL && children > 1)
                    articulationPointList[u] = true;
 
                // If u is not root and low value of one of its child
                // is more than discovery value of u.
                if (parent[u] != NIL && low[v] >= disc[u])
                    articulationPointList[u] = true;
            }
 
            // Update low value of u for parent function calls.
            else if (v != parent[u])
                low[u]  = Math.min(low[u], disc[v]);
        }
    }
    
    public void printArticulationPoints(int rootVertex) {
        // Mark all the vertices as not visited
        boolean visited[] = new boolean[vertices];
        int disc[] = new int[vertices];
        int low[] = new int[vertices];
        int parent[] = new int[vertices];
        boolean ap[] = new boolean[vertices]; // To store articulation points
 
        // Initialize parent and visited, and ap(articulation point)
        // arrays
        for (int i = 0; i < vertices; i++) {
            parent[i] = NIL;
            visited[i] = false;
            ap[i] = false;
        }
 
        // Call the recursive helper function to find articulation
        // points in DFS tree rooted with vertex 'i'
        for (int i = rootVertex; i < vertices; i++) {
            if (visited[i] == false)
                getArticulationPoints(i, visited, disc, low, parent, ap);
        }
 
        // Now ap[] contains articulation points, print them
        for (int i = 0; i < vertices; i++) {
        	System.out.print(i+" ");
            if (ap[i] == true) {
                System.out.print(i+" ");
            }
        }
        System.out.println("\n"+vertexValues.get(rootVertex));

    }
    
    // Function that returns reverse (or transpose) of this graph
    public Graph getTranspose() {
        Graph reverseGraph = new Graph(vertices);
        for (int v = 0; v < vertices; v++) {
            // Recur for all the vertices adjacent to this vertex
            Iterator<Integer> iterator = adjacencyList[v].listIterator();
            while(iterator.hasNext()) {
                reverseGraph.adjacencyList[iterator.next()].add(v);	
            }
        }
        return reverseGraph;
    }
 
    public void fillOrder(int v, boolean visited[], Stack<Integer> stack) {
        // Mark the current node as visited and print it
        visited[v] = true;
 
        // Recur for all the vertices adjacent to this vertex
        Iterator<Integer> iterator = adjacencyList[v].iterator();
        while (iterator.hasNext()) {
            int n = iterator.next();
            if(!visited[n])
                fillOrder(n, visited, stack);
        }
 
        // All vertices reachable from v are processed by now,
        // push v to Stack
        stack.push(new Integer(v));
        
    }
 
    // The main function that finds and prints all strongly
    // connected components
    public void printSCCs() {
        Stack<Integer> stack = new Stack<>();
 
        // Mark all the vertices as not visited (For first DFS)
        boolean visited[] = new boolean[vertices];
        for(int i = 0; i < vertices; i++)
            visited[i] = false;
 
        // Fill vertices in stack according to their finishing
        // times
        for (int i = 0; i < vertices; i++)
            if (visited[i] == false)
                fillOrder(i, visited, stack);
 
        // Create a reversed graph
        Graph gr = getTranspose();
 
        // Mark all the vertices as not visited (For second DFS)
        for (int i = 0; i < vertices; i++)
            visited[i] = false;
 
        // Now process all vertices in order defined by Stack
        while (stack.empty() == false) {
            // Pop a vertex from stack
            int v = (int)stack.pop();
 
            // Print Strongly connected component of the popped vertex
            if (visited[v] == false) {
                gr.DFSUtil(v, visited);
                System.out.println();
            }
        }
    }
}
