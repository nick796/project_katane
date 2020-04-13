#include "Graph.h"
#include <list>
#include <iostream>
#include <stdio.h>
#include <list>
#include <algorithm>
#include <array>
#include <fstream>
#include <iomanip>
#include <vector>
#include <stack>
// Perform BFS given a starting vertex
void Graph::DFS(int starting_vertice) {

	//create a stack to help with algorithm
	stack<int> stack;

	//At the start of the method mark all the vertices unvisited(false)
	vector<bool> visited(num_vertices, false);

	//For the unique vertices values
	vector<int> vertices_set;

	stack.push(starting_vertice);

	//The main job of DFS
	while (!stack.empty()) {
		starting_vertice = stack.top();
		stack.pop();
		if (!visited[starting_vertice]) {
				
			vertices_set.push_back(starting_vertice);
			cout << " i was called " << endl;
			visited[starting_vertice] = true;
		}
		for (auto vertex = neighboors[starting_vertice].begin(); vertex != neighboors[starting_vertice].end(); vertex++) {
			cout << " i was called " << endl;
			if (!visited[*vertex]) {
				stack.push(*vertex);
				
			}
		}
	
	}

	cout << "The DFS vertice set is: " << endl;
	for(int i = 0; i < vertices_set.size(); i++) {
		cout << vertices_set[i] << " ";
	}
	cout << endl;
	
}

Graph::Graph(int v) {
	num_vertices = v;
	neighboors = new list<int>[v];
}

Graph::~Graph() {

	delete[] neighboors;
}

void Graph::addEdge(int x, int y) {
	//add to the neighboors of x the y vertice
	neighboors[x].push_back(y);
	
}

