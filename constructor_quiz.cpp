//  Create a Function which takes two points objects and computes the distace between those two points


#include<iostream>
#include<math.h>
using namespace std;          

class points
{
    int x1, y1;
    int x2, y2;
    double distance;
    public:
        void func()
        {
            cout<<"enter the vlaue of x1 and y1 : "<<endl;
            cin>>x1>>y1;
            cout<<"enter the value of x2 and y2 : "<<endl;
            cin>>x2>>y2;

            distance= sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

            cout<<"the distance is : "<<distance;
        }
};

int main()
{
    points a;
    a.func();
    return 0;
}