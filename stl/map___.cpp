/* Date: 12 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> mp;

    mp[1] = "Sailendra";
    mp[2] = "Chettri";
    mp[13] = "Coder";

    mp.insert({14, "Roa"});

    cout << "Before erase: " << endl;
    cout << "is 13 present? " << mp.count(13) << endl;

    for (auto val : mp)
    {
        cout << val.first << " -> " << val.second << endl;
    }
    cout << endl;

    cout << "After erase: " << endl;
    mp.erase(13);
    for (auto val : mp)
    {
        cout << val.first << " -> " << val.second << endl;
    }
    cout << endl;

    cout << "is 13 present? " << mp.count(13) << endl
         << endl;

    auto it = mp.find(2);

    for (auto i = it; i != mp.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }

    return 0;
}