//
//  Mushroom.cpp
//  Exam1
//
//  Created by Phuntsho Norbu on 10/24/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//
#include <fstream>
#include <string>
#include "Mushroom.h"
#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;




void Mushroom::Readfile()
{   string Mcommon_name;
    string Mscientific_name;
    string line;
    int Mquantity;
    int Mtotal_value_of_quantity;
    int Mratio;
    long starting_position = 0;
    long end_position = 0;

    ifstream myfile;
    myfile.open("text.csv");
    
    while (!myfile.eof())
    {   getline (myfile, line);
        
        //inserts the common name into a vector called common name.
        starting_position = line.find(",");
        Mcommon_name = line.substr(end_position, starting_position);
        //cout << "The common name is:" << Mcommon_name <<endl;
        common_name.push_back(Mcommon_name);
        end_position = starting_position +1;
        
        starting_position = line.find(",", end_position);
        Mscientific_name = line.substr(end_position,starting_position-end_position);
        //cout << "The scientific name is:" << Mscientific_name <<endl;
        scientific_name.push_back(Mscientific_name);
        end_position = starting_position+1;
        
        starting_position = line.find(",", end_position);
        istringstream(line.substr(end_position,starting_position)) >> Mquantity;
        //cout << "The quantity is:" << Mquantity <<endl;
        quantity.push_back(Mquantity);
        end_position = starting_position+1;
        
        starting_position = line.find(",", end_position);
        istringstream(line.substr(end_position,starting_position)) >> Mtotal_value_of_quantity;
        //cout << "The Total value is:" << Mtotal_value_of_quantity <<endl;
        total_quantity_value.push_back(Mquantity);
        end_position = starting_position+1;
        
        Mratio = Mtotal_value_of_quantity/ Mquantity; // this is how much each mushroom is worth.
        ratio.push_back(Mratio);
        copy_of_ratio.push_back(Mratio);
    }
}
//=========================================================================================================

void Mushroom::Sort_Ratio()
{
    sort(copy_of_ratio.begin(), copy_of_ratio.end(), greater<int>()); // sorts the copy vector holding the ratios.
    
}
//=========================================================================================================

int Mushroom::Search_Indexes(int num)
{   for (short i = 0; i < copy_of_ratio.size(); i++)
    {
        if (num == ratio[i])
            return i;
    }
    return 0;
}

//=========================================================================================================

void Mushroom::BestChoice(int size_of_satchel)
{
    int left_over =0;
    int index;
    int quantity_holder =0;

    for (short i=0; i < ratio.size(); i++)
    {
        index = Search_Indexes(copy_of_ratio[i]);
        quantity_holder += quantity[index];
        
        if(quantity_holder < size_of_satchel)
            cout << quantity[index] << " ounces of " << common_name[index] << "(" << scientific_name[index] << ") Mushrooms" << endl;
        
        else if (quantity_holder > size_of_satchel)
        {   left_over = quantity_holder - size_of_satchel;
            cout << left_over << " ounces of" << common_name[index] << "(" << scientific_name[index] << ") Mushrooms" <<endl;
            quantity_holder = quantity_holder - left_over;
            break;      }
    }
    
}
//=========================================================================================================








