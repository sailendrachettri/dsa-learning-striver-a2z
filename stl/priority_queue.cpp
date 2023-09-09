/* Date: 12 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> maxi;                            // default MAX HEAP
    priority_queue<int, vector<int>, greater<int>> mini; // min heap

    maxi.push(3);
    maxi.push(1);
    maxi.push(2);
    maxi.push(0);

    mini.push(3);
    mini.push(1);
    mini.push(2);
    mini.push(0);

    int size = maxi.size();

    for (int i = 0; i < size; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl
         << endl;

    size = mini.size();

    for (int i = 0; i < size; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
    // mini.push(101);

    cout << "Empty: " << mini.empty() << endl;
    cout << "Empty: " << maxi.empty() << endl;

    return 0;
}