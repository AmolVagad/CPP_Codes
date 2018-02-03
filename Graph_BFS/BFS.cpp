// Program to print BFS for a graph starting from source s 

#include<stdio.h>
#include<iostream>
#include<list>

using namespace std;
//Creating a class for Graphs 

class Graph{
	int V; // # of vertices 
	list<int> *adj; // pointer to array with adjacency list 
	
	public: 
		Graph(int V) ; // Parameterized Constructor 
		void addEdge(int v, int w) ; //fun to add edge betwn v and w
		void BFS(int s); //print BFS starting from source s

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

void Graph::BFS(int s)
{
	//marking all vertices as visited initially except the source 
	bool *visited = new bool[V];
	for(int i =0; i < V; i++)
	{
		if(i == s)
			visited[i] = true;
		else
			visited[i] = false;
		
	}
	// Create a queue for BFS
	list<int> queue;
	
	//Mark current node as visited
	queue.push_back(s);
	
	//iterator used to obtain all adjacent vertices 
	list<int>::iterator i;
	
	while(!queue.empty())
	{
		s = queue.front();
		cout<<s<<" ";
		queue.pop_front();
		
		//Get all adjacent vertices of vertex s
		for(i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if(!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}		
		}	
	}	
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

	cout << "Following is Breadth First Traversal "
	 << "(starting from vertex 2) \n";
	g.BFS(2);

    return 0;
	





}
