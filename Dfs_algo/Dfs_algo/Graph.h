#pragma once
#include <list>
#include <iostream>
#include <stdio.h>


using namespace std;

class Graph
{
private:
	//number of vertices
	int num_vertices;
	
	//pointer to adjacency list
	list<int> *neighboors;
	
	

public:
	//DFS method with a startting point
	void DFS(int total_Vertices);

	void addEdge(int x, int y);
	//Constructor
     Graph(int starting_point);
	 ~Graph();
	
	
	

};

