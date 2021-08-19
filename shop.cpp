#include<iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void)
             {counter = 0;}
        void setPrice(void);
        void displayPrice(void);
};

 void shop ::setPrice (void)
 {
     cout<<"enter ID of your item : ";
     cin>>itemId[counter];
     cout<<"enter the Price of your item : ";
     cin>>itemPrice[counter];
     counter++;

 }

 void shop :: displayPrice(void)
 {
     for (int i = 0; i < counter; i++)
     {
         cout<<"the price of the iter with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
     }
     
 }

int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
 
    dukan.displayPrice();
    return 0;
}