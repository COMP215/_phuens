//
//  main.cpp
//  Exam1
//
//  Created by Phuntsho Norbu on 10/24/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#include <iostream>
#include "Mushroom.h"
using namespace std;
int main()
{
    Mushroom M;
    M.Readfile();
    M.Sort_Ratio();
    M.BestChoice(20);
}
