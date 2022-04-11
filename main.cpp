#include<iostream>
#include <cstdlib>
#include "algorithms.h"
using namespace std;

int minLocation(int first, int last, int a[]);
void selectionSort(int a[], int length) {
    int loc, minIndex;
    for (loc = 0; loc < length - 1; ++loc) {
        minIndex = minLocation(loc, length - 1, a);
        swap(a[loc], a[minIndex]);

        cout << "\nPass [" << loc + 1 << "]" << endl;
        for (int i = 0; i < (length); ++i)
        {
            cout << a[i] << ", ";
        }
        cout << endl;
    }
}
int minLocation(int first, int last, int a[])
{
    int loc, minIndex;
    minIndex = first;
    for (loc = first + 1; loc <= last; ++loc)
        if (a[loc] < a[minIndex])
            minIndex = loc; return minIndex;
}
void swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    int size = n;
    int times = 1;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        cout << "\nPass [" << times << "]" << endl;
        times++;
        for (int index = 0; index < size; index++)
        {
            cout << arr[index] << ", ";
        }
        cout << endl;
    }
}

int main()
{
    int size{0};
    cout << "Enter array size: ";
    cin >> size;

    int *arr = new int[size];

    for (int i{0}; i < size; ++i)
    {
        arr[i] = rand() % 100 + 10;
    }

    cout << "Before Sort: \n";
    printArr(arr, size);

    // Sorting Algorithm
    sort(arr, size);


    cout << "\nAfter Sort: \n";
    printArr(arr, size);

    return 0;
}