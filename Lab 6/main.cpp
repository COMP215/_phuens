//
//  main.cpp
//  Lab7
//
//  Created by Phuntsho Norbu on 11/1/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#include <iostream>
#include <cmath>


void SelectionSort(int*, int);
void BubbleSort(int*, int);
void MergeSort (int*, int);
using namespace std;

int main()
{
    
    int array_ [] = {2,5,1,67,34,23};
    int array_size_ = 6;
    char answer;
    cout << "Enter S to use selection sort" << endl << "Enter B to use Bubble sort"<<endl << "Enter M to use Merge sort" <<endl;
    cin >> answer;
    
    if (answer == 'B')
        BubbleSort(array_, array_size_);
    else if (answer == 'S')
        SelectionSort(array_, array_size_);
    else
        cout << "Sorry, the work is under progress! " << endl;
    
    if (answer != 'M')
    {
    for (short i =0; i < array_size_; i++) {
        cout << array_[i] << " ";
    }
    cout << endl;
    }
}

    
void SelectionSort(int* array, int array_size)
{
    int min_index;
    for (int i = 0; i < array_size; i++)
    {   min_index = i;
        for (int j = i; j < array_size; j++)
        {   if (array[min_index] > array[j])
                min_index = j;
        }
            swap(array[i], array[min_index]);
    }
}


void BubbleSort(int* array, int array_size_)
{
    for (int i = 0; i < array_size_; ++i)
    {
        for (int j = 0; j < array_size_ - i - 1; ++j)
        {   if (array[j + 1] < array[j])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void MergeSort(int* array_one, int array_size)
{
    int mid = floor((0 + array_size) / 2);
    
    int temp[mid], temp2[mid];
    int b = 0;
    
    for (int i = 0; i < mid; ++i)
    {
        temp[i] = array_one[i];
    }
    for (int i = mid; i <= array_size; ++i)
    {
        temp2[b] = array_one[i];
        b++;
    }
    
    
}


