/* Date: 12 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Sailendra");
    s.push("Chettri");
    s.push("End");

    cout << s.top() << endl;

    s.pop();
    cout << s.top() << endl;

    cout << "Size: " << s.size() << endl;

    cout << "Empty: " << s.empty() << endl;

    return 0;
}