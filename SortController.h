//
// Created by nscc on 3/28/18.
//

#include <regex>
#include <chrono>
#include <iostream>
#include <fstream>
#include <string>

#ifndef ASS3_DATASORTER_SORTCONTROLLER_H
#define ASS3_DATASORTER_SORTCONTROLLER_H

using namespace std;
using namespace chrono;

class SortController
{

public:
    SortController();
    ~SortController();

    void TestDataSorting();
    int array_size;

private:
    ofstream Output_File;

    int* data_array;

    void Populate_Array(int array_size);

    void Bubble_Sorting();
    void Selection_Sorting();
    void Insertion_Sorting();
    void Shell_Sorting();
    void Merge_Sorting(int data_array[], int left, int right);
    void Merge(int data_array[], int left, int mid, int right);
    void Quick_Sorting(int data_array[], int left, int right);
    void Print_Array(string type);
    void TestDataDump();

    ////My custom Quick_Sorting() diidn't work so I used the provided functions to test time
    void QuickSort(int *array, int beg, int end, int size);
    int Partition(int *array, int beg, int end);
    void DumpArray(int *array, int size);
};


#endif //ASS3_DATASORTER_SORTCONTROLLER_H
