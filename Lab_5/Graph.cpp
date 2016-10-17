//
//  Graph.cpp
//  Lab_5
//
//  Created by Phuntsho Norbu on 10/9/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
#include "Graph.h"

//-----------------------------------------------------------------------------------------

bool Graph::AddVertex(string data)
{   vertex.push_back(data);
    count++;
    return true;    }

//-----------------------------------------------------------------------------------------

bool Graph::AddEdges(string source , string target)
{   for (short i=0; i < vertex.size();i++)
    {   if (source == vertex[i])
         {  edges.resize(count);
            edges[i].push_back(target);
            return true;  }    }
    cout << "couldnt find the vertex" << endl;
    return false;   }

//------------------------------------------------------------------------------------------

void Graph::PrintGraph()
{   for (short i = 0; i < vertex.size(); i++)
    {   for (short j= 0; j < edges[i].size(); j++)
        {   cout << vertex[i] << "  ===>  " << edges[i][j]  << endl;     }   }   }

//-------------------------------------------------------------------------------------------

void Graph::WritetoFile()
{   ofstream file;
    file.open("Text.dot");
    file << "Graph G {" <<endl;
    for (short i = 0; i < vertex.size(); i++)
    {   for (short j= 0; j < edges[i].size(); j++)
        {   file <<vertex[i] << " -- " << edges[i][j]<<";"  << endl;   }   }
    
    file << "}";
    file.close();   }

//--------------------------------------------------------------------------------------------


















