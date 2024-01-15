#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;
    // p = make_pair(2, "abc");
    // // or
    // // pair<int , string> p;
    // // p={2 , abc};
    // // cout << p.first << " " << p.second << endl;

    // // can be copied like a normal integer
    // pair<int, string> &p1 = p;
    // p1.first = 3;
    // cout << p.first << " " << p.second << endl;

    // // what was the need of pairs in stl-->> --> to maintain relation between two different types of data types
    // int a[] = {1, 2, 3};
    // int b[] = {2, 3, 4};
    // pair<int, int> p_array[3];
    // p_array[0] = {1, 2};
    // p_array[1] = {2, 3};
    // p_array[2] = {3, 4};
    // swap(p_array[0], p_array[3]);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << p_array[i].first << " " << p_array[i].second << endl;
    // }

    cout << "Enter the first element" << endl;
    cin >> p.first;
    cout << p.first;

    // int a[10];
    // vector<int> v;

    // double a[10];
    // vector<double> v;

    // pair <int, int> p;
    // vector < pair  <int , int> > v;  // vector of pairs
}