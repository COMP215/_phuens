//
//  Graph.h
//  Lab5
//
//  Created by Phuntsho Norbu on 9/27/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#ifndef __Lab5__Graph__
#define __Lab5__Graph__
#include <string>
#include <stdio.h>
#include <vector>
using namespace std;
class Graph {
private:
    vector<string> Vertices;			//our vector for vertices
    vector<vector<string> > Edges;		//our vector of vectors of edges
    vector<vector<int> > Labels;		//labels for each edge
    int count_;							//keeps a count for the size of the edges vector
    vector<string> MSTvertices;			//our vector for vertices
    vector<vector<string> > MSTedges;
    vector<vector<int> > MSTlabels;
    
    
    
public:
    bool AddVertex(string);				//adds a vertice to the graph
    bool AddEdge_and_Weight(string, string, int);	//adds edge to graph
    void Print();					//prints the graph
    void ToGraphviz();				//writes graph to dot file
    Graph(){};
    //bool Check_Edges(string);
    void PrimsMST();
    //void MSTPrint();
    int SearchIndex_i(int);
    int SearchIndex_j(int);
    int MinimumWeight();
    vector<bool>VisitedVertex;
    vector<int> MinWeight;
    bool Check(int);
    int used_min[10];
    int min = INT_MAX;

};

#endif /* defined(__Lab5__Graph__) */
