/* Date: 11 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
     vector<int> arr1;
     vector<int> arr2(5);         // 5 is the size of a vector
     vector<int> arr3(5, 10);     // 5 is size and 10 is value for all // default is 0
     vector<int> copyArrOf(arr3); // copy of arr3

     // vector_name.push_back(element_to_be_added);
     arr1.push_back(100);
     arr1.push_back(200);

     // vector_name.insert(position, value);
     arr1.insert(arr1.begin() + 2, 300);
     arr1.insert(arr1.begin() + 3, 400);

     // reverse(arr1.begin(), arr1.end());

     cout << "Front: " << arr1.front() << endl;

     for (int i : arr1)
     {
          cout << i << " ";
     }
     cout << endl;

     cout << "Common vector methods" << endl;

     /*

     cout << "Capacity(how many element it holds): " << arr.capacity() << endl;
     cout << "Size(number of element currently present): " << arr.size() << endl
          << endl;

     arr.push_back(1);
     cout << "Capacity(how many element it holds): " << arr.capacity() << endl;
     cout << "Size(number of element currently present): " << arr.size() << endl
          << endl;

     arr.push_back(2);
     cout << "Capacity(how many element it holds): " << arr.capacity() << endl;
     cout << "Size(number of element currently present): " << arr.size() << endl
          << endl;

     arr.push_back(3);
     cout << "Capacity(how many element it holds): " << arr.capacity() << endl;
     cout << "Size(number of element currently present): " << arr.size() << endl
          << endl;

     arr.push_back(4);
     cout << "Capacity(how many element it holds): " << arr.capacity() << endl;
     cout << "Size(number of element currently present): " << arr.size() << endl
          << endl;

     arr.push_back(5);
     cout << "Capacity(how many element it holds): " << arr.capacity() << endl;
     cout << "Size(number of element currently present): " << arr.size() << endl
          << endl;

     arr.shrink_to_fit();

     cout << "Capacity(how many element it holds): " << arr.capacity() << endl;
     cout << "Size(number of element currently present): " << arr.size() << endl
          << endl;

     // arr.clear();

     cout << "Capacity(how many element it holds): " << arr.capacity() << endl;
     cout << "Size(number of element currently present): " << arr.size() << endl
          << endl;

     cout << "Front: " << arr.front() << endl;
     cout << "Back: " << arr.back() << endl;

     for (int i : arr)
     {
         cout << i << " ";
     }

     cout << endl;

     arr.pop_back();

     for (int i : arr)
     {
         cout << i << " ";
     }
     */

     return 0;
}