#include<iostream>
using namespace std;

class Shop
{
    int id;
    float price;
    public:
        void setdata(int a, int b)
        {
            id = a;
            price = b;
        }
        void display(void)
        {
            cout<<"ID of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl<<endl;
        }

};
int main()
{
    int size = 4;
    int p;
    float q;
    
    Shop *ptr = new Shop[size];
    Shop *ptrtemp = ptr;

    for (int i = 1; i < size; i++)
    {
        cout<<"Enter the ID and price of item "<<i<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for (int i = 1; i < size; i++)
    {
        cout<<"Item number: "<<i<<endl;
        ptrtemp->display();
        ptrtemp++;
    }
    


    return 0;
}