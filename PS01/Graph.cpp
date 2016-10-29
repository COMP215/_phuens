//
//  Graph.cpp
//  Lab5
//
//  Created by Phuntsho Norbu on 9/27/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#include "Graph.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;




bool Graph::AddVertex (string data) {
    //adds the data to the vertices vector and increases the size of the edges vector simultaneously
    Vertices.push_back(data);
    count_++;
    return false;
}

bool Graph::AddEdge_and_Weight (string source_vertex, string target_vertex, int weight) {
    //adds an connection between two vertices with a label
    //the label is a number quantifying the size of the connection
    
    for (int i=0; i < Vertices.size(); ++i) {
        if (source_vertex == Vertices[i]) {
            Edges.resize(count_);
            Edges[i].push_back(target_vertex);
            Labels.resize(count_);
            Labels[i].push_back(weight);

            return true;
        }
    }
    cout << "Vertice " << source_vertex << " not found in graph\n";
    return false;
}
//bool Graph::Check_Edges(string data)
//{
//    for (short i=0; i < vertices.size(); i++)
//    {   for (short j=0; j < edges[i].size();j++)
//        {   if (data == edges[i][j])
//            return true;    }   }
//    return false;
//}

void Graph::Print() {
    //prints the graph in the same format as will output to a .dot file for Graphviz
    cout << "graph G {\n";
    cout << "node [shape = egg];\n";
    cout << "node [color = blue];\n";
    for (int i=0; i < Vertices.size(); ++i) {
        for (int j=0; j < Edges[i].size(); ++j) {
            cout << Vertices[i] << " -- " << Edges[i][j] << "[ label = " << Labels[i][j] <<" ];\n";
        }
    }
    cout << "}" << endl;
    
}

void Graph::ToGraphviz() {
    //writes the graph to a .dot file to be visualized by Graphviz
    ofstream myfile;
    myfile.open("graph.dot");
    myfile << "graph G {\n";
    myfile << "node [shape = circle];\n";	//shape of the vertices
    myfile << "node [color = blue];\n";		//adds color to the vertices
    for (int i=0; i < Vertices.size(); ++i) {
        for (int j=0; j < Edges[i].size(); ++j) {
            myfile << Vertices[i] << " -- " << Edges[i][j] << "[ label = " << Labels[i][j] <<" ];\n";
        }
    }
    myfile << "}" << endl;
    myfile.close();
}

//void Graph::MSTgraph()
//{
//    //string source = vertices[0];
//    vector<string> MSTverteices;
//    vector<vector<string>> MSTedges;
//    vector<vector<int>>MSTlabels;
//    vector<bool> inMST (count , false);
//    int min = 1000;
//    int start=0; int end=0;
//    
//    
//    for (int i =1; i < vertices.size(); i++)
//    {   cout << "size of vertice:" << vertices.size() <<endl ;
//        for(int j=1; j < edges[i].size(); j++)
//        {   //cout << "edge size: "<< edges[2].size()<<endl;
//              int k=0;
//              while (k < edges[1].size())
//              {   if (labels[i][j] < min)
//                  {   min = labels[i][j];
//                      start = i;
//                      end = k;
//                      cout << "K:"<<end << "end:"<<end<<endl;  }
//                  else
//                  {k++;   cout << "k:" << k << "   i:" << i << "    j:"<<j<<endl;}    }
//              
//              MSTverteices.push_back(vertices[start]);
//              MSTedges.resize(count);
//              MSTedges.push_back(edges[end]);
//              MSTlabels.resize(count);
//              MSTlabels[i].push_back(min);    }     }
//}

//void Graph::MSTPrint() {
//    //prints the graph in the same format as will output to a .dot file for Graphviz
////    cout << "graph G {\n";
////    cout << "node [shape = egg];\n";
////    cout << "node [color = blue];\n";
//    
//    //cout << "Does this even work?"<<endl;
//    for (int i=0; i < MSTvertices.size(); ++i) {
//        for (int j=0; j < MSTedges[i].size(); ++j) {
//            cout << MSTvertices[i] << " -- " << MSTedges[i][j] << "[ label = " << MSTlabels[i][j] <<" ];\n";
//        }
//    }
//    cout << "}" << endl;
//    
//}


void Graph::PrimsMST()
{
    
    int min_weight = 0;
    int index_i_ = 0; int index_j_=0;
    for (short i=0; i< Vertices.size() ; i++)
        VisitedVertex.push_back(false)  ;
    
    //(visited_vertex.begin(),visited_vertex.end(),false);
    VisitedVertex[0]= true;
    for (int i =0; i< Vertices.size(); i++)
    {
        if(VisitedVertex[i] == true)
        
        {
            min_weight = MinimumWeight();
            index_j_= SearchIndex_j(min_weight);
            index_i_ = SearchIndex_i(min_weight);
            cout << "The edges are: " << Vertices[index_i_] << "---"<< Edges[index_i_][index_j_] << " and the min weight is " << min_weight<< endl;
        }
        VisitedVertex[i+1]=(true);
        
    }
}


int Graph::MinimumWeight()
{   for (short i =0; i<10 ; i++)
        used_min[i] = 0;

    for (int i =0; i < Vertices.size(); i++)
    {   for (int j =0; j<Edges[i].size(); j++)
        {   if (VisitedVertex[i] == true)
            MinWeight.push_back(Labels[i][j]);
        //cout <<smallest_label[i] << endl;
        }
    }
    
    
    
    int index_i_= 0;
    int fone = 0;
    bool ans = Check(fone);
    if (ans != true)
    {   for (short i=0; i < MinWeight.size(); i++)
        {   if (min > MinWeight[i])
            {   min = MinWeight[i];
                index_i_ = i;   }
            fone = index_i_;
            used_min[i] = min; }    }
    
    return min;
}

bool Graph::Check(int index)
{
    for (short i=0; i <10; i++)
    {
        if (used_min[i] == min)
            return true;    }
    return false;
}



int Graph::SearchIndex_i(int min_weight)
{
    for (int i =0; i < Vertices.size(); i++) {
        for (int j =0; j<Edges[i].size(); j++) {
            if (Labels[i][j] == min_weight)
            { //cout << "the i index : " << i;
                return i;}
        }
    }
    return 0;
}

int Graph::SearchIndex_j(int min_weight)
{
    for (int i =0; i < Vertices.size(); i++) {
        for (int j =0; j<Edges[i].size(); j++) {
            if (Labels[i][j] == min_weight)
            {//cout << "the j index: " << j<<endl;
                return j;}
        }
    }
    return 0;
}

