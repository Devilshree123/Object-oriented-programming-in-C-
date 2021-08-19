#include<iostream>
using namespace std;

class complex 
{
     int a,b;
    public:
        complex(void);
        void printno()
        {
            
            cout<<"vlaue of a and b is "<<a<<" and "<<b<<endl;
        }
};

complex :: complex(void)  //  ------->>>    Default Constructor
{
    a = 10;
    b = 20;
}

int main()
{
    complex a;
    a.printno();
    return 0;
}