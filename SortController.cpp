//
// Created by nscc on 3/28/18.
//

#include "SortController.h"

SortController::SortController()
{
}

SortController::~SortController()
{
}

//// Bubble Sort:
//// Reads 2 cells of the array, compares them,
//// If the first number is bigger than the 2nd, swap.
////https://www.tutorialspoint.com/data_structures_algorithms/bubble_sort_algorithm.htm
void SortController::Bubble_Sorting()
{
    //Temp to store value when swapping cells
    int temp = 0;

    for(int i = 0; i < array_size-1; i++)
    {
        for (int x = 0; x < array_size - i - 1; x++)
        {
            int first = x;
            int second = x+1;

            //If the 1st number is larger
            if (data_array[first] > data_array[second])
            {
                //Swap the two cells
                swap(data_array[first], data_array[second]);
            }
        }
    }
}

//// Selection Sort:
//// Initially; Sorted list = empty, Unsorted list = all data
//// Finds the location of the smallest value
//// Swap that value to the end of the sorted list
//// Finish with fully populated sorted list
////https://www.tutorialspoint.com/data_structures_algorithms/selection_sort_algorithm.htm
void SortController::Selection_Sorting()
{
    int first;

    //Initally start off setting the minimum to the value of the first element
    int selection_id = 0;
    int min = data_array[selection_id];

    //Search for the smallest value in the array
    for (int i = 0; i < array_size; i++)
    {
        //Set temp ID to compare values
        first = i;

        //Move the selection cell to be one ahead of the minimum cell
        for (int selection = i + 1; selection < array_size; selection++)
        {
            // If the selected cell is smaller than the original,
            // set the id to the new cell
            if (data_array[first] > data_array[selection])
            {
                first = selection;
            }
        }

        //Catch if the previous loop has changed the first cell value
        //If so, swap the cells
        if (first != i)
        {
            swap(data_array[first], data_array[i]);
        }
    }
}

//// Insertion Sort:
//// Maintain a sorted sub-list
//// Iterate through the list, grab the last item from the sorted list, and the first item in the unsorted list
//// If the second value is smaller, swap them
//// On future iterations, if the sorted list becomes out of order, it will fix the list by moving the cell by one spot each loop
////https://www.tutorialspoint.com/data_structures_algorithms/insertion_sort_algorithm.htm
void SortController::Insertion_Sorting()
{
    for (int first_unsorted = 1; first_unsorted < array_size; first_unsorted++)
    {
        //Collect the data of the element to be inserted
        int stored_value;
        stored_value = data_array[first_unsorted];

        //Set a value to read the last element in the sorted section of the array
        int last_in_sorted = first_unsorted - 1;

        //Check to see if the already sorted values are larger
        //If they are larger, push them ahead
        //Once all the larger cells have been pushed, insert the stored_value
        while (stored_value < data_array[last_in_sorted] && last_in_sorted >= 0)
        {
            //Using last_in_sorted + 1 instead of first_unsorted to avoid conflicts during the second loop and all following loops
            data_array[last_in_sorted + 1] = data_array[last_in_sorted];
            last_in_sorted--;
        }

        //Insert the value into the now empty cell
        data_array[last_in_sorted + 1] = stored_value;
    }
}

//// Shell Sort:
//// Split the list into smaller sections and run an Insertion Sorting algorithm on each section
//// These section's values will be compared across the matching values by id in the other sections
//// Each cross section of the array will be sorted until the section length reaches 1
//// Once the section length is 1, an Insertion Sort algorithm is used
////https://www.tutorialspoint.com/data_structures_algorithms/shell_sort_algorithm.htm
void SortController::Shell_Sorting()
{
    int stored_value;

    //Set the iteration length and cut it in half on each loop
    for (int length = array_size / 2; length > 0; length /= 2)
    {
        //Starting from the # of the length of the section
        //Iterate through this section until the end of the array
        for (int i = length; i < array_size; i++)
        {
            //Make a copy of the index so the loop doesn't break
            int index = i;

            stored_value = data_array[index];

            //Compare the values from one section to the paired values from the others
            //If the values in the later sections are smaller than the first, swap them
            if(data_array[index] < data_array[index - length])
            {
                //If there the stored value is smaller than the value being compared, swap the cells
               while (index - length >= 0 && stored_value < data_array[index - length])
               {
                    data_array[index] = data_array[index - length];

                    //Move the index to point towards the next section of data
                    index -= length;
               }
               data_array[index] = stored_value;
            }
        }
    }
}

//// Merge Sort - Sorting:
//// Uses a "Divide and Conquer" technique to split the array into equals halves until they are in segments of 1
//// Combine them back into groups in the same way they were split up.
//// Resort the elements after every grouping until the fully sorted list is left as a single segment
////https://www.tutorialspoint.com/data_structures_algorithms/merge_sort_algorithm.htm
////https://www.geeksforgeeks.org/merge-sort/
void SortController::Merge_Sorting(int data_array[], int left, int right)
{

    //Check if the left index is smaller than the right
    if(left < right)
    {
        //Find the index of the middle
        int mid = left + (right - left) / 2;

        //Sort the first half
        //Recursively divide the section until 1 element remains in each section
        Merge_Sorting(data_array, left, mid);

        //Sort the second half
        //Recursively divide the section until 1 element remains in each section
        Merge_Sorting(data_array, mid + 1, right);

        //Merge the sections back together
        //If only 1 element remains, the sorting is complete
        Merge(data_array, left, mid, right);
    }
}

//// Merge Sort - Merging:
//// Merges two sub arrays back together
//// First array is between data_array[l] - data_array[m]
//// Second array is between data_array[m + 1] - data_array[r]
////https://www.tutorialspoint.com/data_structures_algorithms/merge_sort_algorithm.htm
////https://www.geeksforgeeks.org/merge-sort/
void SortController::Merge(int data_array[], int left, int mid, int right)
{
    //Temp indices of the 3 arrays that will be used
    int index1, index2, index3;

    //Find array lengths
    int first_half_length = mid - left + 1;
    int second_half_length = right - mid;

    //Create each subarray
    int first_half[first_half_length];
    int second_half[second_half_length];

    //Populate the arrays with their respective data sets
    for (index1 = 0; index1 < first_half_length; index1++)
        first_half[index1] = data_array[left + index1];

    for (index2 = 0; index2 < second_half_length; index2++)
        second_half[index2] = data_array[mid + index2 + 1];

    //Begin merging the subarrays back together
    index1 = 0, //Index of the left array
    index2 = 0, //Index of the right array
    ////
    index3 = left; //Index of the merged array

    //While there is still more data to sort
    while (index1 < first_half_length &&
           index2 < second_half_length)
    {
        //If the value in the left array is smaller or equal to the matching right value
        //Add the left value to the merged array and increment the left index
        if(first_half[index1] <= second_half[index2])
        {
            data_array[index3] = first_half[index1];
            index1++;
        }
        //Else, add the right value and increment the right index
        else
        {
            data_array[index3] = second_half[index2];
            index2++;
        }

        //Since an element is added each loop, always increment the merged index
        index3++;
    }

    //Finish adding any remaining elements
    while(index1 < first_half_length)
    {
        data_array[index3] = first_half[index1];
        index1++;
        index3++;
    }

    while(index2 < second_half_length)
    {
        data_array[index3] = second_half[index2];
        index2++;
        index3++;
    }
}

//// Quick Sort:
//// This reads inward from the front and back of the array swapping smaller values to the front
//// The last array element is initially the "pivot"
//// Once the two ends meet, the value in the middle is swapped with the last value in the array
//// This cell becomes the new pivot value and the process repeats recursively
////https://www.tutorialspoint.com/data_structures_algorithms/quick_sort_algorithm.htm
void SortController::Quick_Sorting(int data_array[], int left, int right)
{
    //Initialize the left and right indices
    int index1 = left;
    int index2 = right - 1;

    //Collect the left value and pivot value for comparison
    int pivot = right;

    //Loop until the two ends meet
    while (index1 != index2)
    {
        //If the right value is larger than the pivot, move the right value 1 to the left
         while (data_array[index2] >= data_array[pivot] && index1 != index2)
        {
            index2--;
        }

        //If the left is smaller than the pivot, move the left index 1 to the right
        while (data_array[index1] <= data_array[pivot] && index1 != index2)
        {
            index1++;
        }

        swap(data_array[index1], data_array[index2]);
    }

    swap(data_array[index2 + 1], data_array[pivot]);

    if (index2 - 1 > left)
    {
        Quick_Sorting(data_array, left, index2 - 1);
    }
    if (index2 + 1 < right)
    {
        Quick_Sorting(data_array, index2 + 1, right);
    }
}

void SortController::DumpArray(int *array, int size)
{
    int i;

    for (i = 0; i<size - 1; i++)
    {
        cout << array[i] << ",";
    }
    cout << array[i] << endl;
}

int SortController::Partition(int *array, int beg, int end)          //Function to Find Pivot Point
{
    int p = beg, pivot = array[beg], location;
    #ifdef DEBUG
    cout << "Pivot: " << pivot << endl;
    #endif
    for (location = beg + 1; location <= end; location++)
    {
        if (pivot>array[location])
        {
            array[p] = array[location];
            array[location] = array[p + 1];
            array[p + 1] = pivot;

            p++;
        }
    }
    return p;
}

void SortController::QuickSort(int *array, int beg, int end, int size)
{
    if (beg<end)
    {
        int pivot = Partition(array, beg, end);   //Calling Procedure to Find Pivot
    #ifdef DEBUG
        DumpArray(array, size);
    #endif

        QuickSort(array, beg, pivot - 1, size);         // Subsort left (Recursion)

    #ifdef DEBUG
        DumpArray(array, size);
    #endif

        QuickSort(array, pivot + 1, end, size);	      // Subsort right (Recursion)
    }
}

//Populates the array with numbers between 0 - 32,767
void SortController::Populate_Array(int array_size)
{
    //Reset the seed for the random int function
    srand(1);

    //Reset the array
    data_array = nullptr;

    //Initialize array and loop for the size of the array to populate data
    data_array = new int[array_size];

    for (int i = 0; i < array_size; i++)
    {
        //Populate each array cell with a # between 0 - 32,767
        data_array[i] = rand() % 32768;
    }
}

void SortController::TestDataSorting()
{
    regex intRegex = regex("^[\\d]+$");
    string inputSize;
    string sortSelection;
    int sortSelectionInt;
    string sorting_type;

    do
    {
        cout << "Please enter the size of the array to be sorted." << endl;
        cin >> inputSize;
    }
    while(!regex_match(inputSize, intRegex));

    array_size = stoi(inputSize);

    do
    {
        do
        {
            cout << endl
                 << "Sort Methods:" << endl
                 << "1: Bubble Sort" << endl
                 << "2: Selection Sort" << endl
                 << "3: Insertion Sort" << endl
                 << "4: Shell Sort" << endl
                 << "5: Merge Sort" << endl
                 << "6: Quick Sort" << endl
                 << endl;
            cout << "Please select the type of sorting method (1-6)." << endl;
            cin >> sortSelection;
        }
        while (!regex_match(sortSelection, intRegex));

        sortSelectionInt = stoi(sortSelection);
    }
    while (sortSelectionInt > 6 || sortSelectionInt < 1);

    Populate_Array(array_size);

    auto starting_time = high_resolution_clock::now();

    //Select Sorting Method
    switch (sortSelectionInt)
    {
        case 1:
            Bubble_Sorting();
            sorting_type = "Bubble";
            cout << endl << "Bubble Sorting:";
            break;

        case 2:
            Selection_Sorting();
            sorting_type = "Selection";
            cout << endl << "Selection Sorting:";
            break;

        case 3:
            Insertion_Sorting();
            sorting_type = "Insertion";
            cout << endl << "Insertion Sorting:";
            break;

        case 4:
            Shell_Sorting();
            sorting_type = "Shell";
            cout << endl << "Shell Sorting:";
            break;

        case 5:
            Merge_Sorting(data_array, 0, array_size - 1);
            sorting_type = "Merge";
            cout << endl << "Merge Sorting:";
            break;

        case 6:
            //Quick_Sorting(data_array, 0, array_size - 1);
            QuickSort(data_array, 0, array_size - 1, array_size);
            sorting_type = "Quick";
            cout << endl << "Quick Sorting:";
            break;
    }

    auto ending_time = high_resolution_clock::now();

    if (array_size == 1000)
    {
        Print_Array(sorting_type);
    }

    //// TESTING
    //TestDataDump();

    cout << endl << "Total time for sorting: "
            << duration_cast<milliseconds>(ending_time - starting_time).count()
            << "ms" << endl;
}

//Print the sorted array to a local file
void SortController::Print_Array(string type)
{
    string file_name = type + ".txt";
    try
    {
        Output_File.open(file_name, ios::trunc);
    }
    catch (exception& e)
    {
        cout << "File opening error" << endl;
    }

    if (Output_File.is_open())
    {
        try
        {
            for (int i = 0; i < array_size; i++)
            {
                if (i != 0 && i != array_size)
                {
                    Output_File << ", ";
                }

                if(i % 10 == 0)
                {
                    Output_File << endl;
                }

                Output_File << data_array[i];
            }
        }
        catch (exception& e)
        {
            cout << "File writing error" << endl;
        }
        Output_File.close();
    }
}

void SortController::TestDataDump()
{
    for (int i=0; i<array_size; i++)
    {
        if (i != 0 && i != array_size)
        {
            cout << ", ";
        }

        if(i % 28 == 0)
        {
            cout << endl;
        }
        cout << data_array[i];
    }
    cout << endl;
}
