#include<iostream>
using namespace std;

class student
{
    protected:
        int roll_no;
    
    public:
        void set_roll_no(int);
        void get_roll_no(void);
};

void student :: set_roll_no(int r)
{
    roll_no = r;
}

void student :: get_roll_no()
{
    cout<<"the roll number is "<<roll_no<<endl;
}

class exam : public student
{
    protected:
        float maths;
        float physics;
    
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void exam :: set_marks(float m1,float m2) 
{
    maths = m1;
    physics = m2;
}
void exam :: get_marks(void)
{
    cout<<"the marks obtained in physics are "<<maths<<" and "<<physics<<" respectively"<<endl;
}

class result : public exam
{
    float percentage;

    public:
        void display_percentage()
        {
            get_roll_no();
            get_marks();
            cout<<"your percentage is "<<(maths+physics)/2<<endl;
        }
};

int main()
{
    result pallu;
    pallu.set_roll_no(45);
    pallu.set_marks(45,70);
    pallu.display_percentage();
    return 0;
}