//
//  Graph.h
//  Lab_5
//
//  Created by Phuntsho Norbu on 10/9/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#ifndef __Lab_5__Graph__
#define __Lab_5__Graph__
#include <stdio.h>
#include <iostream> 
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Graph {
public:
    vector<string> vertex;
    vector<vector<string>> edges;
    bool AddVertex(string);
    bool AddEdges(string, string);
    int count=0;
    void PrintGraph(void);
    void WritetoFile(void); 
    
};























#endif /* defined(__Lab_5__Graph__) */
