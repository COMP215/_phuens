//
//  main.cpp
//  Lab_5
//
//  Created by Phuntsho Norbu on 10/9/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#include <iostream>
#include "Graph.h"
int main()
{
    Graph G;
    G.AddVertex("Bhutan");
    G.AddVertex("Nepal");
    G.AddVertex("India");
    G.AddVertex("USA");
    G.AddVertex("Malaysia");
    G.AddVertex("China");
    
    
    
    G.AddEdges("China", "Bhutan");
    G.AddEdges("India", "China");
    G.AddEdges("Bhutan", "Nepal");
    G.AddEdges("USA", "Nepal");
    G.AddEdges("Malaysia", "Nepal");
    G.AddEdges("China", "Nepal");
    G.AddEdges("USA", "Malaysia");
    G.AddEdges("USA", "India");
    G.AddEdges("Bhutan", "Malaysia");
    G.PrintGraph();
    G.WritetoFile();
    
    
}