#include <iostream>
#include <map>

using namespace std;

void print(map<int,int> & m)
{
    for(map<int,int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout<<"("<<it->first<<","<<it->second<<")"<<endl;
    }
}
int main()
{
    map<int,int> m;
    m.insert(make_pair(2,3)) ;
    m.insert(make_pair(1,4)) ;
    m.insert(make_pair(5,8)) ;
    m.insert(make_pair(4,7)) ;
    m.insert(make_pair(3,4)) ;
    print(m);
    int s = m.size();
    cout<<"size = "<<s<<endl;

    map<int,int>::iterator it = m.find(3);
    cout<<it->first<<endl;
}
