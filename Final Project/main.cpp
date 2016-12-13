//
//  main.cpp
//  Final Project
//  Phuntsho Norbu
//  Created by Phuntsho Norbu on 12/6/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int MinimumJumps(int *, int);

int main()
{
    
    int array_[] = {1,1,1,2,1,1,1};
    int array_size_ = 7;
    int number_of_jumps_ = MinimumJumps(array_, array_size_);
    
    if (number_of_jumps_ == 10000)
    {
        cout << "The number of jumps cannot be determined becuase of the 0!" << endl;
        cout << "Please change the values in the array!" << endl << "Done" << endl;
    }
   
    else
    {
        cout << "The minimum jumps required is: " << number_of_jumps_ << endl;
        cout << "Done" <<endl;
    }
    
    
    
    

}

int MinimumJumps(int* array_, int array_size_)
{
    int *jumps_ = new int[array_size_]; //holds
    int i, j;
    
    if (array_size_ == 0 || array_[0] == 0)
        return 10000;
    
    jumps_[0] = 0;
    
    for (i = 1; i < array_size_; i++)
    {
        jumps_[i] = 10000;
        for (j = 0; j < i; j++)
        {
            if (i <= j + array_[j] && jumps_[j] != 1000)
            {
                jumps_[i] = min(jumps_[i], jumps_[j] + 1);
                break;
            }
        }
    }
    return jumps_[array_size_-1];
}









