/* Date: 16 - 09 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int timesOfChar(string str, char ch)
{
    int cnt = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    string str = "sailendra chettri";
    char ch = 'r';
    int times = timesOfChar(str, ch);

    cout << times << " times." << endl;

    return 0;
}