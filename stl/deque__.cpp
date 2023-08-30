/* Date: 11 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(10);
    d.push_front(5);

    for (int val : d)
    {
        cout << val << " ";
    }
    cout << endl;

    // d.pop_back();
    // d.pop_front();

    // for (int val : d)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // cout << "First index element: " << d.at(1) << endl;
    // cout << "First element: " << d.front() << endl;
    // cout << "Last element: " << d.back() << endl;
    // cout << "is empty: " << d.empty() << endl;

    cout << "size: " << d.size() << endl;
    // cout << "max_size: " << d.max_size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    for (int val : d)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "size: " << d.size() << endl;
    // cout << "max_size: " << d.max_size() << endl;

    return 0;
}