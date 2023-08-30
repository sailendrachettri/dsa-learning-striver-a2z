/* Date: 18 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // creation
    unordered_map<string, int> umap;

    // insertion - I
    pair<string, int> pr = make_pair("One", 1);
    umap.insert(pr);

    // insertion - II
    pair<string, int> pr2("Two", 2);
    umap.insert(pr2);

    // insertion - III
    umap["Three"] = 3;
    // umap["Three"] = 33; // update the entry - no duplicate entries

    // output - displaying
    // cout << umap.at("Three") << endl;
    // cout << umap["Three"] << endl;

    // cout << umap["unknownKey"] << endl;
    // cout << umap.at("unknownKey") << endl; // throws an error without above line

    // size;
    cout << "size: " << umap.size() << endl;

    // check presence
    // cout << umap.count("bro") << endl; // 0 false - absent
    // cout << umap.count("Three") << endl; // 1 true - present

    // umap.erase("Three");
    // cout << umap.size() << endl;

    // accessing
    // for (auto val : umap)
    // {
    //     cout << val.first << " " << val.second << endl;
    // }

    // iterarator
    unordered_map<string, int>::iterator it = umap.begin();

    while (it != umap.end())
    {

        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}