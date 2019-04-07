// QuickSort.cpp : Defines the entry point for the console application.
//

//
//  main.cpp
//  QuickSort
//
//  Created by Hal O'Connell on 2015-02-11.
//  Copyright (c) 2015 Hal O'Connell. All rights reserved.
//
// Updated to correct partitioning bug. Redesigned the Partition function
// and split it out on its own to isolate the problem
//
// Original buggy code left as commented section for comparison
//
#include <iostream>
#include <regex>
#include "SortController.h"

#define DEBUG

using namespace std;

int main(int argc, char* argv[])
{
    SortController sorter;

    bool restart = false;
    string YesOrNo;

    do
    {

        ////Run Sorting Tests
        sorter.TestDataSorting();

        cout << "Type 'y' to run another test." << endl;
        cin >> YesOrNo;

        restart = false;
        if (YesOrNo == "y" || YesOrNo == "Y")
        {
            restart = true;
        }
    }
    while (restart);

    return 0;
}


