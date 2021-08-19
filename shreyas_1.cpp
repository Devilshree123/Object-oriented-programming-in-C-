#include<iostream>
using namespace std;

class student
{
    private:
        string id;
        int std;
        string name;

    public:
    void get()
    {
        cout<<"enter the name id and std :"<<endl;
        cin>>name;
        cin>>id;
        cin>>std;
        cout<<"name = "<<name<<endl;
        cout<<"std  = "<<std<<endl;
        cout<<"id   = "<<id<<endl;
    }
};

int main()
{
    student s;
    s.get();
    return 0;
}