// InsertionSort.cpp 

#include <iostream>

void insertionSort(int data[], int size);
void swap(int& x, int& y);
void printArray(int data[], int size);


int main()
{
    int data[] = { 3, 8, 9, 2, 4, 7, 1 };

    printArray(data, sizeof(data) / sizeof(1));

    insertionSort(data, sizeof(data) / sizeof(1));

    printArray(data, sizeof(data) / sizeof(1));

}


void insertionSort(int data[], int size)
{
    int unsortedValue;
    int scan;

    for (int index = 1; index < size; index++)
    {
        unsortedValue = data[index];

        scan = index;

        while (scan > 0 && data[scan - 1] > unsortedValue)
        {
            data[scan] = data[scan - 1];
            scan--;
        }

        data[scan] = unsortedValue;
    }
}

void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

void printArray(int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << data[i] << ", ";
    }
    std::cout << std::endl;
}
