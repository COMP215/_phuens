//
//  main.cpp
//  Lab5
//
//  Created by Phuntsho Norbu on 9/27/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#include <iostream>
#include "Graph.h"

using namespace std;
int main()
{
    Graph graph1;
    
    graph1.AddVertex("A");
    graph1.AddVertex("B");
    graph1.AddVertex("C");
    graph1.AddVertex("D");
    graph1.AddVertex("E");
    graph1.AddVertex("F");
    
    
    graph1.AddEdge_and_Weight("A","B",7);
    graph1.AddEdge_and_Weight("A","F",3);
    graph1.AddEdge_and_Weight("A","D",4);
    graph1.AddEdge_and_Weight("B","F",2);
    graph1.AddEdge_and_Weight("B","E",9);
    graph1.AddEdge_and_Weight("F","C",3);
    graph1.AddEdge_and_Weight("C","D",6);

    graph1.Print();
    graph1.ToGraphviz();
    cout << "======================" <<endl;
   graph1.PrimsMST();
    //graph1.MSTPrint();

    return 0;

}