//
//  Mushroom.h
//  Exam1
//
//  Created by Phuntsho Norbu on 10/24/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#ifndef __Exam1__Mushroom__
#define __Exam1__Mushroom__
#include <vector>
#include <stdio.h>
using namespace std;


class Mushroom
{
public:
    void Readfile(); // function to read the .txt file.
    void Sort_Ratio();
    void BestChoice (int);
    int Search_Indexes(int);
    vector<string> common_name;
    vector<string> scientific_name;
    vector<int> quantity;
    vector<int> total_quantity_value;
    vector<int> ratio;
    vector<int> copy_of_ratio;
};


















#endif /* defined(__Exam1__Mushroom__) */
