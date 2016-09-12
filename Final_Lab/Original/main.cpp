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
/* 
 SUMMARY : This program, generates a random number of words with random length and stores it in a .txt file. After stroing it sorts the words alphabetically.
 INPUT: the user inputs the number of words and the length of word. 
 OUTPUT: it stores the randomly generated words in a .txt file and then sorts the words alphabetically.
 */




void generate_random_word(int number_of_words, int length_of_word);
void sort_randomly_generated_words(int number_of_words);

//========================================================================================================================
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\|||||||||||
//========================================================================================================================

using namespace std;

int main()
{
    int number_of_strings; int length_of_string;   // variable declaration.
    cout << "how many strings do you want:";       // user inputs how many words they want
    cin >> number_of_strings;
    cout << "how long do you want a string to be:";// user inputs how long their word should be.
    cin >>length_of_string;
    //srand(time (0)) ;
    
    generate_random_word(number_of_strings,length_of_string); //calls the function to generate random words
    sort_randomly_generated_words(number_of_strings);         //calls the function to sort the randomly generated words in alphabetical order
    
    
}

//==========================================================================================================================
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//==========================================================================================================================

void generate_random_word (int number_of_words, int length_of_word)  // function takes the number of words and the length of the words as arguments
{   srand(time(0)); //seed the rand fucntion
    ofstream outfile("text.txt"); // output file stream

    
    static const string random_letter="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for ( short i=0; i < number_of_words; i++)
    {   string randomly_generated_word= ""; // makes an empty string called randomly_generated_wrods to store the words.

        for( short i=0; i < length_of_word;  i++)
        {
            randomly_generated_word = randomly_generated_word + (random_letter[rand() % random_letter.length()]); //stores the randomly generated words
        }
        
        outfile << randomly_generated_word <<endl; //inserts it in the file.
        cout << randomly_generated_word<<endl;
        
        
    }
    
    outfile.close(); // closes the file
}
//===========================================================================================================================
//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//===========================================================================================================================
void sort_randomly_generated_words(int number_of_words) // function takes the number of words as an argument and sorts the previously generated words in alphabetical order.
{   string filename = "text.txt";
    fstream file;
    file.open(filename); // opens the file
    
    const int max_size = 10000; // stes the size as 10000
    string random_generated_words[max_size]; // makes the size of the array of string called random_generated_words to 10000;
    
    if (file.is_open()) //given that the file is open, carries out the commands below
    {   for (short i=0; i<number_of_words; i++)
        file >> random_generated_words[i]; //puts the random generated words into the .txt file
        
    }
    
    sort (random_generated_words, random_generated_words+number_of_words); // sorts the randomly generated words in alphabetical order.
    //--------------------------------------------------------------------------------------
    cout << "================================================="<<endl << endl;
    cout << "THE SORTED WORDS ARE:  " << endl;
    cout <<endl;
    file <<"--------------------------"<<endl << "the sorted words are"<<endl << "--------------------------"<< endl;
    //-------------------------------------------------------------------------------------
    for (short i=0; i<number_of_words; i++)
    {
        cout << random_generated_words[i]<<endl;
        file << random_generated_words[i] << endl; // puts the sorted randomly generated words in the .txt file.
        
    }
    file.close(); // closes the file.
    
    //-------------------------------------------------------------------------------------
    cout <<"==================================================="<<endl;
    cout << "Done" << endl;
    cout << endl;
    //--------------------------------------------------------------------------------------


}












