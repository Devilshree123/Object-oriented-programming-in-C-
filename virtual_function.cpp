#include<iostream>
using namespace std;
class base 
{
    public:
    int var_base =10;
        void virtual display()
        {
            cout<<"The value of var_base is :" <<var_base<<endl;
        }
};
class derived : public base
{
    int  var_derived =20;
    public:
        void display()
        {
            cout <<"The value of var_derived is :"<<var_derived<<endl;
        }
};
int main()
{
    base *baseclasspointer;
    base b1;
    derived b2;
    baseclasspointer = &b2;
    baseclasspointer->display();


    return 0;
}