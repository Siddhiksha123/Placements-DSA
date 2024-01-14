#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;
    p = make_pair(2, "abc");
    // or
    // pair<int , string> p;
    // p={2 , abc};
    // cout << p.first << " " << p.second << endl;

    // can be copied like a normal integer
    pair<int, string> p1 = p;
    p1.first = 3;
    cout << p1.first << " " << p1.second << endl;
}