//  main.cpp
//  Original
//
//  Created by Phuntsho Norbu on 8/31/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//
#include <stdio.h> 
#include <time.h>
#include <iostream>
#include <fstream>
#include <string>
#include "ctime"
//#include <algorithm>


void generate_word(int number_of_words, int length_of_word);
void FileOpen (int numb, int stringLeng);

//========================================================================================================================
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\|||||||||||
//========================================================================================================================

using namespace std;
//vector<string> V;
int main()
{
    int number_of_strings; int String_Leng;
    cout << "how many strings do you want:";
    cin >> number_of_strings;
    cout << "how long do you want a string to be:";
    cin >>String_Leng;
    //srand(time (0)) ;
    
    generate_word(number_of_strings,String_Leng);
    FileOpen(number_of_strings,String_Leng);
    
    
}

//==========================================================================================================================
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//==========================================================================================================================

void generate_word (int number_of_words, int length_of_word)
{   srand(time(0));
    ofstream outfile("text.txt");

    
    static const string random_data_letter="abcdefghijklmnopqrstuvwxyz0123456789";

    for ( short i=0; i < number_of_words; i++)
    {   string word= "";

        for( short i=0; i < length_of_word;  i++)
        {
            word = word + (random_data_letter[rand() % random_data_letter.length()]);
        }
        
        outfile << word <<endl;
        cout << word<<endl;
        
        
    }
    
    outfile.close();
}
//===========================================================================================================================
//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//===========================================================================================================================
void FileOpen(int numb, int stringLeng)
{   string filename = "text.txt";
    fstream file;
    file.open(filename);
    
    const int MAX = 10000;
    string data[MAX];
    
    if (file.is_open())
    {   for (short i=0; i<numb; i++)
        file >> data[i];
        
    }
    
    sort (data, data+numb);
    //--------------------------------------------------------------------------------------
    cout << "================================================="<<endl << endl;
    cout << "THE SORTED WORDS ARE:  " << endl;
    cout <<endl;
    file <<"--------------------------"<<endl << "the sorted words are"<<endl << "--------------------------"<< endl;
    //-------------------------------------------------------------------------------------
    for (short i=0; i<numb; i++)
    {
        cout << data[i]<<endl;
        file << data[i] << endl;
        
    }
    
    
    
    
    file.close();
    
    
    //-------------------------------------------------------------------------------------
    cout <<"==================================================="<<endl;
    cout << "Done" << endl;
    cout << endl;
    //--------------------------------------------------------------------------------------


}












