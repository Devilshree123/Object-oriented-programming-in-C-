#include<iostream>

using namespace std;
class CWH
{   
    protected:
        string title;
        float rating;

    public:
        CWH(string s, float r)
        {
            title = s;
            rating = r;
        }
        virtual void display()
        {
            
        }
};
class CWHvideo : public CWH
{
    float videolength;
    public:
        CWHvideo(string s, float r, float vl) : CWH(s,r)
        {
            videolength = vl;

        }
         void display()
        {
            cout<<"this is a amazing video with title :"<<title<<endl;
            cout<<"rating to this video is :"<<rating<<" out of 5 "<<endl;
            cout<<"Length of this video is "<<videolength<<endl<<endl;
        }
};
class CWHtext : public CWH
{
    int words;
    public:
        CWHtext(string s, float r, int wc) : CWH(s,r)
        {
            words = wc;

        }
         void display()
        {
            cout<<"this is a amazing video with title :"<<title<<endl;
            cout<<"rating to this video is :"<<rating<<" out of 5 "<<endl;
            cout<<"Words in this video are  "<<words<<endl;
        }
       
};

int main()
{
    string title;
    float rating , vlen;
    int words;


   title = "Django tutorials";
   vlen = 4.56;
   rating = 4.4;
   words = 433;
   CWHvideo djvideo(title ,rating ,vlen);
   CWHtext djtext(title , rating , words);
//    djvideo.display();
//    djtext.display();
   
   CWH *tut[2];

   tut[0] = &djvideo;
   tut[1] = &djtext;

     

    tut[0]->display();
    tut[1]->display();

    
    return 0;
}