//对5名选手打分，并得出最高分，最低分，平均分
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

class Person
{
    string name;
    int score;
public:
    Person()
    {
        name = "null";
        score = 0;
    }
    Person(string name,int n = 0)
    {
        this->name = name;
        score = n;
    }
    void setScore()
    {
        int n = 0;
        cin>>n;
        score = n;
    }
    void setName()
    {
        string temp;
        cin>>temp;
        name = temp;
    }
    int getScore()
    {
        return score;
    }
    void showPerson()
    {
        cout<<"Name: "<<name<<" Score: "<<score<<endl;
    }

};

int main()
{
    vector<int> vector;
    deque<int> deque;
    Person p[5];

    vector.resize(5);
    deque.resize(5);

    for(int i = 0; i < 5; ++i)
    {
        cout<<"输入第"<<i + 1<<"位选手的姓名: ";
        p[i].setName();
    }
    for(int i = 0; i < 5; ++i)
    {
        cout<<"输入第"<<i + 1<<"位选手的成绩: ";
        p[i].setScore();
    }
    for(int i = 0; i < 5; ++i)
    {
        p[i].showPerson();
    }
    for(int i : vector)
    {
        vector[i] = p[i].getScore();
    }
    sort(vector.begin(),vector.end());
    for(int i : vector)
    {
        cout<<vector[i]<<" ";
    }

}