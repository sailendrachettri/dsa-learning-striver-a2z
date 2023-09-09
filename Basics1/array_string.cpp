/* Date:  - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[] = {1, 20, 3, 4};
    // int arr[10] = {
    //     0,
    // };
    // int size = sizeof(arr) / sizeof(arr[0]);

    // cout << "size: " << size << endl;

    // int i = size - 1;
    // while (i >= 0)
    // {
    //     cout << arr[i] << " ";
    //     i--;
    // }

    // cout << "size: " << size << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "size: " << size << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // STRING
    string str = "Sailendra";
    cout << str.length() << endl;
    cout << str.size() << endl;
    cout << str.at(0) << endl;
    reverse(str.begin(), str.end());
    cout << str << endl;
    cout << str.capacity() << endl;
    str.resize(10);
    cout << str.capacity() << endl;

    return 0;
}