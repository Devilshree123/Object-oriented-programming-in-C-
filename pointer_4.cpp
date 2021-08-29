#include<iostream>
using namespace std;
class A
{
    int a;
    public:
        void setdata(int a)
        {
            this->a = a;
        }
        void getdata()
        {
            cout<<"The value of a is "<<a<<endl;
        }
};
int main()
{
    A shreyas;
    shreyas.setdata(10);
    shreyas.getdata();
    
    return 0;
}