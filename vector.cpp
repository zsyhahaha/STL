//
// Created by »ªË¶ on 21/7/2022.
//
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> v;
    vector<int> a1;
    vector<int> a2;
    vector<int> a3;
    vector<int> a4;
    for (int i = 0; i < 4; ++i) {
        a1.push_back(i + 1);
        a2.push_back(i + 2);
        a3.push_back(i + 3);
        a4.push_back(i + 4);
    }
    v.push_back(a1);
    v.push_back(a2);
    v.push_back(a3);
    v.push_back(a4);
    for(vector<int> a : v)
    {
        for(int b : a)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }

    cout<<a1.capacity()<<endl;
    cout<<a1.size()<<endl;
    a1.resize(6);
    cout<<a1.capacity()<<endl;
    cout<<a1.size()<<endl;

    a1.reserve(10);
    cout<<a1.capacity()<<endl;
    cout<<a1.size()<<endl;

    return 0;
}
