// Dfs_algo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <list>
#include <algorithm>
#include <array>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include "Graph.h"
#include <stack>
#include <set>
#include <iterator>
// to mass comment block Ctr+K+C
using namespace std;
int main()
{
	
	ifstream myfile;
	int x, y ,z;
	set<int> vertice_set; //set for the discrete values in the file

	myfile.open("DFS_test.txt");

	//to count the discrete vertex names
	while (!myfile.eof()) {
		myfile >> z;
		vertice_set.insert(z);
	}
	
	// Create the Graph with the corresponding number of vetex that exist in the text file
	Graph graph(vertice_set.size());
	// clear the buffer
	cout.flush();

	if (myfile.fail()) // checks to see if file opended
	{
		cout << "failure at opening the file!" << endl;
		return 1; // no point continuing if the file didn't open...
	}
	//assign every line of numbers to x and y till the end and make the corresponding adding edge
	while (myfile.peek() != EOF) {

		myfile >> x;
		myfile >> y;
		graph.addEdge(x, y);
		
		
	}
	//start the DFS algorithm from the vertex named 1
	graph.DFS(1);

	myfile.close();
	
	
	

	return 0;
   
}

