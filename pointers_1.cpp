#include<iostream>
using namespace std;

int main()
{
    //revisiting pointers//
    int a = 4;
    int*ptr = &a;
    cout<<"The vlaue of ptr is "<<*(ptr)<<endl;
    cout<<"The address of a is "<<ptr<<endl;

    //new keyword
    int*p = new int(40);
    cout<<"The value at addr p is "<<*(p)<<endl<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    
    return 0;
}