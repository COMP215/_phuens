//
//  mushrooms.h
//  Exam01
//
//  Created by Phuntsho Norbu on 10/24/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#ifndef __Exam01__mushrooms__
#define __Exam01__mushrooms__

#include <stdio.h>
#include <iostream>
#include <string>
#include <array>
using namespace std;
class Mushroom
{
public:
    int MAX_SIZE  = 4;
    void Mushroom_sizes();
    void ReadFile();
    void BiggestMushroom(int);
    
    
    
    string Mushroom_names[4];    //--|
    int Mushroom_quantity [4];   //  |--> wanted to start it easy so i just assigned the values myself.
    int Mushroom_price[4];       //__|
};























#endif /* defined(__Exam01__mushrooms__) */
