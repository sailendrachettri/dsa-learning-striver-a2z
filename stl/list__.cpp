/* Date: 11 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(101);
    l.push_back(102);
    l.push_back(103);
    l.push_front(100);

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "erase: ";
    l.erase(l.begin());

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "Size: " << l.size() << endl;

    list<int> copyList(l);

    for (int val : copyList)
    {
        cout << val << endl;
    }

    return 0;
}