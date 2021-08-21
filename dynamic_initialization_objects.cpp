#include<iostream>
using namespace std;


class BankDeposite
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposite(){}
        BankDeposite(int p, int y, float r);  //   ------>r can be value like 0.003
        BankDeposite(int p, int y, int r);  //   ------>r can be value like 3%

        void show();
        
       
};



BankDeposite :: BankDeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

BankDeposite :: BankDeposite(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

void BankDeposite :: show()
{
    cout<<"principal amount was "<<principal<<endl
        <<"Return value after "<<years
        <<" is "<<returnValue;
     
 }

int main()
{
    BankDeposite b1,b2;
    int p ,y ,R;
    float r;


    cout<<"enter the value of p ,y , r"<<endl;
    cin>>p>>y>>r;

    b1 = BankDeposite(p,y,r);
    b1.show();




    cout<<" \n enter the value of p ,y , R"<<endl;
    cin>>p>>y>>r;

    b2 = BankDeposite(p,y,R);
    b2.show();
    
    return 0;
}