/* Date: 11 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    array<int, 10> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "arr at " << 2 << " is " << arr.at(2) << endl;
    cout << "arr front: " << arr.front() << endl;
    cout << "arr back: " << arr.back() << endl;
    cout << "arr size: " << arr.size() << endl;

    return 0;
}