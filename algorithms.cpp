//
// Created by Guido Asbun on 4/9/22.
//

#include "algorithms.h"

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
}

void merge(int a[], int n1, int n2)
{
    int *temp = new int[n1 + n2];
    int i{0}, j1{0}, j2{0};

    while (j1 < n1 && j2 < n2)
        temp[i++] = (a[j1] <= a[n1 + j2] ? a[j1++] : a[n1 + j2++]);
    while (j1 < n1)
        temp[i++] = a[j1++];
    while (j2 < n2)
        temp[i++] = (a + n1)[j2++];
    for (i = 0; i < n1 + n2; i++)
        a[i] = temp[i];

    delete[] temp;
    temp = nullptr;
}

void sort(int a[], int n)
{
    if (n > 1)
    {
        int n1 = n / 2;
        int n2 = n - n1;
        sort(a, n1);
        sort(a + n1, n2);
        merge(a, n1, n2);
    }
}

void bubbleSort(int a[], int length)
{
    int temp = 0;
    for (int j = 0; j < length - 1; ++j)
    {
        for (int i = 0; i < (length -1 - j); ++i)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        cout << "\nPass [" << j+1 << "]" << endl;
        for (int i = 0; i < (length); ++i)
        {
            cout << a[i] << ", ";
        }
        cout << endl;
    }
}




