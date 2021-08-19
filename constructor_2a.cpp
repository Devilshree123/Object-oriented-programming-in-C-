#include<iostream>
using namespace std;

class complex 
{
    int a , b;
    public:
        complex(int x, int y);
        void printno()
        {
            cout<<"value of a and b is "<<a<<" and "<<b<<endl;
        }
};

complex :: complex(int x, int y) //------>>> Pramitarized constructor
{
    a = x;
    b = y;
}

int main()
{
    //implicit call
    complex a(3,5);
    a.printno();

    //explicit call
    complex b = complex(7,9);
    b.printno();

    return 0;
}