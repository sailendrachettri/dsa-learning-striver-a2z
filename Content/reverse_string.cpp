/* Date: 28 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string str = "Sailendra";

    // METHOD 1
    // string reverse = "";
    // int size = str.size();

    // for (int i = size - 1; i >= 0; i--)
    // {
    //     reverse += str[i];
    // }

    // cout << "reverse: " << reverse << endl;
    // cout << "Str: " << str << endl
    //      << "reverse: " << reverse << endl;

    // METHOD 2
    // string str = "Chettri";

    // reverse(str.begin(), str.end());

    // cout << str << endl;

    // METHOD 3
    string str = "Sailendra Chettri";
    int size = str.size() - 1;
    int startInd = 0;

    while (startInd < size)
    {
        swap(str[startInd++], str[size--]);
    }

    cout << str << endl;

    return 0;
}