#include <iostream>
#include <string>

using namespace std;

int main()
{
    char c[10] = "hello c";
    string a1;
    string a2("Hello world");
    cout<<a2<<endl;
    string a3(a2);
    cout<<a3<<endl;
    string a4(10,'a');
    cout<<a4<<endl;

    a1 = "hello a1";
    cout<<a1<<endl;
    a2 = c;
    cout<<a2<<endl;
    a3.assign("hello a3");
    cout<<a3<<endl;
    a4.assign("hello a4",4);
    cout<<a4<<endl;

    auto s1 = a1 + " + " + a2;
    cout<<s1<<endl;
    string s2("hello s2 + ");
    s2 += a3;
    cout<<s2<<endl;

    int pos1;
    pos1 = s1.find("a1", 0);
    cout<<"pos1 of a1 = "<<pos1<<endl;
    int pos2;
    pos2 = s1.find("c");
    cout<<"pos2 of a1 = "<<pos2<<endl;

    string s3;
    s3 = s2.replace(6,2,"s3");
    cout<<s3<<endl;

    int compare;
    compare = s1.compare(s2);
    if(compare > 0)
        cout<<"s1 > s2"<<endl;
    else if(compare < 0)
        cout<<"s1 < s2"<<endl;
    else
        cout<<"s1 = s2"<<endl;

    if(s2 > s3)
        cout<<"s2 > s3"<<endl;
    else
        cout<<"s2 <= s3"<<endl;

    for (int i = 0; i < s1.length(); ++i) {
        cout<<s1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < s2.length(); ++i) {
        cout<<s2.at(i)<<" ";
    }
    cout<<endl;

//    cout<<"rewrite s1"<<endl;
//    for (int i = 0; i < s1.length(); ++i) {
//        cin>>s1[i];
//    }
//    cout<<endl;
//    for (int i = 0; i < s1.length(); ++i) {
//        cout<<s1[i]<<" ";
//    }

    s1.insert(1,"insert");
    cout<<s1<<endl;
    s1.erase(1,6);
    cout<<s1<<endl;


    string s4 = s1.substr(3,7);
    cout<<s4<<endl;

    return 0;
}