/* Date: 12 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(1);
    s.insert(10);
    s.insert(10);
    s.insert(11);
    s.insert(11);
    s.insert(21);
    s.insert(2);
    s.insert(4);
    s.insert(1);
    s.insert(0);

    for (int val : s)
    {
        cout << val << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for (int val : s)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "is 5 present? " << s.count(5) << endl;

    set<int>::iterator itr = s.find(4);
    cout << "itr: " << *itr << endl;

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}