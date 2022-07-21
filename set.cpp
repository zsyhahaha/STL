#include <set>
#include "iostream"

using namespace std;

void print(const set<int> & s)
{
    for(set<int>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout<< * it <<" ";
    }
}
int main()
{
    set<int> s;
    s.insert(12);
    s.insert(4);
    s.insert(6);
    print(s);

    set<int>::iterator it;
    it = s.find(12);
    cout<< * it <<endl;
}
