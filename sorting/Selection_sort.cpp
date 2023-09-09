/* Date: 23 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define SIZE 10

int main()
{
    int arr[] = {10, 2, 5, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "size: " << size << endl;

    cout << "Before sorting: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    // code for selection sort
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    cout << "After Sorting: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}