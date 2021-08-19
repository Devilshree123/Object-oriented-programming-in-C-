#include<iostream>
using namespace std;

class point
{
    int a , b;
    public:
        point(int x, int y)
        {
            a = x;
            b = y;
        }
        void displaypoint(void)
        {
            cout<<"the point is "<<a<<" and "<<b<<endl;
        }
};

int main()
{
    //implicit call
    point p(4,5);
    p.displaypoint();


    //explicit call
    point q = point(15,12);
    q.displaypoint();
    return 0;
}