#include <list>
#include <iostream>

using namespace std;

void printlist(const list<int> & l)
{
    for(list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout<< * it <<" ";
    }
}

void test01()
{
    list<int> l1;
    for (int i = 0; i < 4; ++i)
        l1.push_back(rand() % 10);
    printlist(l1);
    cout<<endl;

    list<int> l2 = l1;
    printlist(l2);
    cout<<endl;

    list<int> l3(l1.begin(),l1.end());
    printlist(l3);
}

void test02()
{
    list<int> l1;
    l1.assign(5,12);
    printlist(l1);
    cout<<endl;

    list<int> l2;
    l2.assign(l1.begin(),l1.end());
    printlist(l2);
}

void test03()
{
    list<int> l1;
    l1.push_back(2);
    l1.push_front(1);
    printlist(l1);
    cout<<endl;

    l1.push_back(3);
    l1.push_back(4);
    l1.pop_front();
    printlist(l1);
    cout<<endl;

    l1.remove(3);
    printlist(l1);
    cout<<endl;
}

int main()
{
    test03();
}