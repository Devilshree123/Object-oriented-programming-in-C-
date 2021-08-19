#include<iostream>
using namespace std;

class Y;
class X
{
    int data;
     friend int add(X , Y );
    public:
        void setvalue(int value)
        {
            data = value;
        }
};

class Y
{
    int num;
     friend int add(X , Y );
    public:
        void setvalue(int value)
        {
            num = value;
        }
};

int add(X o1, Y o2)
{
    cout<<"the summing of the datas of X and Y gives us "<<o1.data + o2.num<<endl;
    return (o1.data + o2.num);
}

int main()
{
    X a;
    Y b;

    a.setvalue(5);
    b.setvalue(10);

    add(a,b);
    return 0;
}