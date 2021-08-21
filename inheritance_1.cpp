#include<iostream>
using namespace std;

//Base class
class Employee
{
    string name;

    public:
    int id;
    float salary;
        Employee(){}
        Employee(int inpid)
        {
            id = inpid;
            salary = 34.0;
        }

};

//Derived class
class programmer : public Employee 
{
    public:
    programmer(int inpid)
        {
            id = inpid;
            salary = 34.0;
        }
        int langCode = 9;
};       


int main()
{
    Employee shreyas(1) , neha(4) , prathamesh;
    cout<<shreyas.salary<<endl;
    cout<<neha.salary<<endl;
    cout<<shreyas.salary<<endl;

    programmer skillf(10);
    cout<<skillf.id;
    return 0;
}