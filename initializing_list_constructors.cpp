#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
        Test(int i, int j) : a(i+b) , b(j)
        {
            cout<<"Constructor Executed "<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};
int main()
{
    Test Neha(5,10);

    return 0;
}