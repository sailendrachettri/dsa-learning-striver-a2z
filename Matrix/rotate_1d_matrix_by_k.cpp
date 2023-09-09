/*
// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

//https://leetcode.com/problems/rotate-array/submissions/
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> temp(n);

        for(int i = 0; i < n; i++)
        {
            temp[(i+k) % n] = nums[i];
        }

        nums = temp; // copying the temp array to original array
    }
*/

/* Date: 25 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<int> &mat, int k, int size)
{
    vector<int> temp(size);

    for (int i = 0; i < size; i++)
    {
        temp[(i + k) % size] = mat[i];
    }

    mat = temp;
}

int main()
{
    vector<int> arr = {0, 10, 20, 24, 36};
    int k = 3;
    int size = arr.size();

    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    rotateMatrix(arr, k, size);

    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    /*

// ROTATE
int size = arr.size();
vector<int> temp(size);

for (int i = 0; i < size; i++)
{
    temp[(i + k) % size] = arr[i];
}
arr = temp;

for (auto val : arr)
{
    cout << val << " ";
}
cout << endl;

*/

    return 0;
}