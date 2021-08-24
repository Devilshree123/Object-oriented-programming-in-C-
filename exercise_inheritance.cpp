/*
// create 2 classes 1.simple calci and 2.scintific calci .

1. simple calci will take input of two numbers using a utility function and perform + - * / and display the result using another function.
2. scintific calci will take input of two numbers using a utility function and perform any four operation of your choice and display the result using another function.
   create another class Hybridcalci and inherit it using these two classes:
   

   Q.1 What type of inheritance are you using ?
   Q.2 Which mode of inheritance are you using ?

 Crate an object of Hybridcalci and display result of simple and sintific calci

    Q.3 How is code reusibility implemented ?

*/

#include<iostream>
#include<cmath>
using namespace std;

class simple_calci 
{
    protected:
        int a,b;
    public:
        void set_value_simple();
        void get_values_simple();
};

void simple_calci :: set_value_simple()
{
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the secod number :";
    cin>>b;
}
void simple_calci :: get_values_simple()
{
    cout<<"The addition of two numbers is "<<a+b<<endl;
    cout<<"The differnce of two numbers is "<<abs(a-b)<<endl;
    cout<<"The product of two numbers is "<<a*b<<endl;
    cout<<"The division of two numbers is   a/b = "<<double(a)/double(b)<<" and b/a = "<<double(b)/double(a)<<endl;
}



class scintific_calci
{
    protected:
        int a,b;
    public:
        void set_value_scintific();
        void get_values_scintific();
};

void scintific_calci :: set_value_scintific()
{
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the secod number :";
    cin>>b;
}

void scintific_calci :: get_values_scintific()
{
    cout<<"The value of sin(a) is  "<<sin(a)<<endl;
    cout<<"The value of cos(a) is  "<<cos(a)<<endl;
    cout<<"The value of exp(a) is  "<<exp(a)<<endl;
    cout<<"The value of tan(a) is  "<<tan(a)<<endl;

    cout<<"The value of sin(b) is  "<<sin(b)<<endl;
    cout<<"The value of cos(b) is  "<<cos(b)<<endl;
    cout<<"The value of exp(b) is  "<<exp(b)<<endl;
    cout<<"The value of tan(b) is  "<<tan(b)<<endl;
}    

class Hybrid_calci : public simple_calci, public scintific_calci
{

};


int main()
{
    // simple_calci shreyas;
    // shreyas.set_value();
    // shreyas.get_values();

    // scintific_calci neha;
    // neha.set_value();
    // neha.get_values();



    Hybrid_calci shreyas;
    shreyas.set_value_simple();
    shreyas.get_values_simple();
    shreyas.set_value_scintific();
    shreyas.get_values_scintific();
    return 0;
}

/*
*****************************************   ANSWERS OF THE ABOVE QUESTIONS   *****************************************************


Q1.
ANS:-   WE ARE USING MULTIPLE INHERITANCE

Q2.
ANS:-   WE ARE INHERITING BOTH CLASS PUBLICALY.



*/