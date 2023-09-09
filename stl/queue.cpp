/* Date: 12 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Sailendra");
    q.push("Chettri");
    q.push("End");
    cout << "Size: " << q.size() << endl;

    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;

    cout << "Size: " << q.size() << endl;

    return 0;
}