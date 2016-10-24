//
//  mushrooms.cpp
//  Exam01
//
//  Created by Phuntsho Norbu on 10/24/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#include "mushrooms.h"
#include <fstream>
#include <string>
#include <array>
#include <list>
#include <time.h>
#include <algorithm>
void Mushroom::Mushroom_sizes()
{
    Mushroom_names[0]= "Maitake";
    Mushroom_price[0]= 10;
    Mushroom_quantity[0]= 5;
    
    Mushroom_names[1]= "Shiitake";
    Mushroom_price[1]= 6;
    Mushroom_quantity[1]= 10;
    
    Mushroom_names[2]= "Oyster";
    Mushroom_price[2]= 5;
    Mushroom_quantity[2]= 12;
    
    Mushroom_names[3]= "Shaggy";
    Mushroom_price[3]= 6;
    Mushroom_quantity[3]= 20;
    
    
}

// I knew that i had to do a .txt file but i wanted to start easy and then move up. So therefore i assigned all the values. 
//==========================================================
//void Mushroom::ReadFile()
//{  ofstream myfile;
//    myfile.open(mushrooms_1.csv);
//    while (myfile.is_open() & !myfile.eof() )
//    {   getline(myfile, currentline);
//        currentline = line.split (",");
//        Mushroom_names = currentline[0];
//        
//    }
//}

void Mushroom::BiggestMushroom(int size_of_satchel) // this function finds the biggest quantity value by quantity ratio.
{
    int max = 0;
    int min = 0;
    int dest=0;

    string data[100];
    for (short i = 0; i < size_of_satchel; i ++) // finds the biggest ratio between the quantity value and the quantity.
    {   data[1] = Mushroom_price[0]; // stores it in a data.
        cout << Mushroom_price[0] <<endl;
        
        if (max > Mushroom_price[i])
            min =  Mushroom_price[i];
        else
            max = Mushroom_price[i];
            dest = i;                   }
    
    sort(data, data); // sorts it.
    

// i thought of sorting the data and then using the second index of the data and use its Mushroom information. and that way i was gonna loop it and try to work it out.

    
    
    
    
    
    
    
    
    
    
}










