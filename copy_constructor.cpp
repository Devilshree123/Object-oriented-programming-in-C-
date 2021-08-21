#include<iostream>
using namespace std;

class number
{
    int a ;
    public:
        number(){
            a=0;
        }
        number(int num)
        {
            a = num;
        }
        number(number &obj)
        {
            cout<<"copy constructor is called "<<endl;
            a = obj.a;
        }

        void display();
};


void number :: display()
{
    cout<<"the number is "<<a<<endl;
}


int main()
{
    number x, y, z(45);
    x.display();
    y.display();
    z.display();

    number z1(z);
    z1.display();

    return 0;
}