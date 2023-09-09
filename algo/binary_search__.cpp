/* Date: 12 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 2, 20, 3, 10, 43, 1, 0, 3, 3, 4};

    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl
         << endl;

    // cout << "binary_search to find a number 201 in vector: " << binary_search(v.begin(), v.end(), 201) << endl;
    // cout << "binary_search to find a number 20 in vector: " << binary_search(v.begin(), v.end(), 20) << endl;

    // cout << "lower_bound: " << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;
    // cout << "lower_bound: " << upper_bound(v.begin(), v.end(), 43) - v.begin() << endl;

    int a = 20, b = 110;

    // cout << "max(): " << max(a, b) << endl;

    // cout << "a: " << a << endl
    //      << "b: " << b << endl;

    // swap(a, b);

    // cout << endl
    //      << "a: " << a << endl
    //      << "b: " << b << endl;

    // string s = "Sailendra";
    // cout << s << endl;
    // reverse(s.begin(), s.end());
    // cout << s << endl;

    // rotate
    // rotate(v.begin(), v.begin() + 2, v.end());
    sort(v.begin(), v.end());

    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl
         << endl;

    return 0;
}