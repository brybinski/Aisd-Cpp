#pragma once
#include <iostream>

template <typename T>
void BubbleSort(T a[], int n)
{
    int i, j;
    T temp;
    for (i = 0; i < n - 1; ++i)
    {
        for (j = 0; j < n - 1 - i; ++j)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}


void quickSort(int[]) {

}