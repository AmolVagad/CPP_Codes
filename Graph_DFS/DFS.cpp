// Program to print BFS for a graph starting from source s 

#include<stdio.h>
#include<iostream>
#include<list>

using namespace std;
//Creating a class for Graphs 

class Graph{
	int V; // # of vertices 
	list<int> *adj; // pointer to array with adjacency list 
	void DFSUtil(int v, bool visited[]);//Recursive function ued by DFS
	
	public: 
		Graph(int V) ; // Parameterized Constructor 
		void addEdge(int v, int w) ; //fun to add edge betwn v and w
		void DFS(int s); //print DFS starting from source s

};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list <int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited[])
{
	//make current node true
	visited[v] = true;
	cout<<v<<" ";
	
	//recur for all vertices adjacent to this vertex
	list<int>::iterator i;
	for(i = adj[v].begin(); i != adj[v].end(); ++i)
		if(!visited[*i])
			DFSUtil(*i, visited);
}


void Graph::DFS(int s)
{
	//marking all vertices as visited initially except the source 
	bool *visited = new bool[V];
	for(int i =0; i < V; i++)
		visited[i] = false;	
	
	//Call the recursive helper function 
	DFSUtil(s,visited);	
}



// Main 


int main()
{

	//create graph
	
	Graph g(4);
	
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Depth First Traversal "
	 << "(starting from vertex 2) \n";
	g.DFS(2);

    return 0;
	





}
