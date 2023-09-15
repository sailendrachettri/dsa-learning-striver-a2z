/* Date: 15 - 09 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    // vector<int> arr = {7, 1, 6, 9, 14};
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int size = arr.size();

    for (int element : arr)
    {
        cout << element << " ";
    }
    cout << endl
         << endl;

    bubbleSort(arr, size);

    for (int element : arr)
    {
        cout << element << " ";
    }

    return 0;
}