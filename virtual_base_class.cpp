#include<iostream>
using namespace std;

class student
{
 protected:
    int roll_number;
public:
    void set_rollnumber(int a)
    {
        roll_number = a;
    }
    void get_rollnumber()
    {
        cout<<"Your roll number is "<<roll_number<<endl;

    }
};

class test : virtual public student
{
    protected:
        int maths , physics;
    public:
        void set_marks(float m1, float m2)
        {
            maths = m1;
            physics = m2;
        }
        void get_marks()
        {
            cout<<"\n****************Your result is here **********************"<<endl<<endl<<endl
                <<"Maths :"<<maths<<endl
                <<"Physics :"<<physics<<endl;
        }
};

class sport : virtual public student
{
    protected:
        float score;
    public:
        void set_score(float s)
        {
            score = s;
        }
        void get_score()
        {
            cout<<"Your PT score is "<<score<<endl;
        }
};

class result :  public test , public sport
{
    private:
        float total;
    public:
        void display_result()
        {
            total = maths + physics + score;
             get_rollnumber();
             get_marks();
             get_score();
            cout<<"your total score is :"<<total<<endl;
        }
};




int main()
{
    result shreyas;
    shreyas.set_rollnumber(45);
    shreyas.set_marks(89.67,99.20);
    shreyas.set_score(9);
    shreyas.display_result();

    return 0;
}