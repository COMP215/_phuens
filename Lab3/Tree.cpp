////
////  Tree.cpp
////  Lab(01) LinkedList
////
////  Created by Phuntsho Norbu on 9/14/16.
////  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
////
//
#include "Tree.h"
#include "Node.h"
#include <assert.h>
#include <time.h>
#include <stack>
using namespace std;
//#include <queue>
//---------------------------------------------------------------------------------------------------
Tree::Tree()
{   root = new Node;
    root = NULL;
   // return root->info;
}
//-------------------------------------------------------------------------------------------------------------
Node* Tree::returnroot()
{   return root;    }
//----------------------------------------------------------------------------------------------------
void Tree::insert_to_tree(int data)
{       
    newNode= new Node();
    newNode-> info = data;
    assert (newNode != NULL);
    newNode->left= NULL;
    newNode->right = NULL;
    
    if (root == NULL)
    {
        root = newNode;
        cout << "newNode has been made the root" << root->info << endl;
    }
    else
    {
        current = root;
        Node* trailcurrent= new Node;
        //---------------------------------------------------
        while (current!= NULL)
        {   trailcurrent = current;
            //------------------------------------------------------------------|
            if (newNode->info == current->info)                          //     |
              {   cout << "They are the same number, cannot insert it"<<endl;// |=>working well. 
                  return;     }                                              // |
            //-------------------------------------------------------------------
            
            else if( newNode->info < current->info )
            {   current = current->left;}

            
            else{
                current = current->right;}
        }//-------------------------------------------------
        
        if (newNode ->info < trailcurrent->info)
        {   trailcurrent->left = newNode; cout << "left:         "<<data <<endl; }
        else
        { trailcurrent->right = newNode; cout  << "right:        "<<data<<endl;}        }       }





//------------------------------------------------------------------------------------------------------------
void Tree::inordertraversal(Node* current)

{   if (current!= NULL)
{
    inordertraversal(current->left);
    cout << "This is the key:   " << current->info<<endl;
    inordertraversal(current->right);
    
}
}

//void Tree::inordertraversal(Node* root)
//
//{   if (root!= NULL)
//{
//    inordertraversal(root->left);
//    cout << "This is the key:   " << root->info<<endl;
//    inordertraversal(root->right);
//    
//}
//}
//


//stack <string> Stack;
//while (current!= NULL || (!Stack.empty()))
//    {if (current!= NULL)
//        {
//            Stack.push (current->info);
//            current = current->left;   }
//        else
//        {
//            current->info = Stack.top();
//            string infor = Stack.top();
//            cout << Stack.top();
//            cout <<"Test1"<<endl;
//            cout << infor << endl;
//            Stack.pop();
//            current = current->right;   }
//    cout <<endl;
//    cout<<"hello man";
//----------------------------------------------------------------------------
    //{   if (root == NULL)
    //        {cout << "The tree is empty"<<endl;}
    //
    //    else
    //    {   current = root;
    //        stack <string> Stack;
    //
    //        while(current!= NULL || !Stack.empty())
    //        {
    //            if (current !=
    //                NULL)
    //               {
    //                //string value = current->info;
    //                Stack.push(current->info);
    //                current = current->left;}
    //            else
    //            {
    //                current->info =Stack.top();
    //                Stack.pop();
    //                cout << current->info<<endl;
    //                current = current->right;}
    //        }}






