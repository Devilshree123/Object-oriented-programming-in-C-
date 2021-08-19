#include<iostream>
using namespace std;

class emp
{
    string id;
    static int count;//static var is also called as class var 😁

    public:
        void setdata(void)
        {
            cout<<"enter the id of the employee ";
            cin>>id;
            count++;
        }
        void getdata(void)
        {
            cout<<"id of the employee is "<<id<<" and the emplioyee no. is "<<count<<endl;
        }
};

int emp :: count; //default value of static variables is 0😁


int main()
{
    emp shreyas,aditya,prathamesh;
     
    shreyas.setdata();
    shreyas.getdata();

    prathamesh.setdata();
    prathamesh.getdata();

    aditya.setdata();
    aditya.getdata();
    return 0;
}