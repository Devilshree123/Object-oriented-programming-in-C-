#include<iostream>
using namespace std;

class complex;

class calculator
{
    public:
        int add(int a, int b)
        {
            return (a+b);

        }
        int sumrealcomplex(complex , complex );
        
        
};


class complex 
{
    int a,b;
    friend int calculator :: sumrealcomplex(complex , complex );
    public:
        void setno(int n1,int n2 )
        {
            a = n1;
            b = n2;
        }
        friend complex sumcomplex(complex o1, complex o2);
        void printno()
        {
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;

        }
};

int calculator :: sumrealcomplex (complex o1, complex o2)
        {
            return (o1.a + o2.b);
        }



int main()
{
    complex c1,c2;
    c1.setno(1,4);
    c2.setno(5,8);
    c1.printno();
    c2.printno();

    
    return 0;
}