#include <iostream>
using namespace std;

class Student
{
    protected:
    int Roll_number;
    public:
    void set_ROll_number(int);
    void get_Roll_number();
};
void Student ::set_ROll_number(int r)
{
    Roll_number =r;
}
void Student :: get_Roll_number()
{
    cout<<"The Roll number is :"<<Roll_number<<endl;
}

class Exam:public Student
{
    protected:
    float math;
    float physics;
    public:
    void setmarks(float,float);
    void getmarks();
};

void Exam ::setmarks(float m1 ,float m2)
{
    math =m1;
    physics =m2;
}
void Exam ::getmarks()
{
    cout<<"the Marks Obtained in math are :"<<math<<endl;
    cout<<"the Marks Obtained in physics are :"<<physics<<endl;
}
class Result :public Exam
{   
    float percentage;
    public:
    void display();
  

};
void Result::display()
{   
      get_Roll_number();
    getmarks();
    cout<<"The Percentage is :"<<(math+physics)/2<<endl;

}
/*
if we inheriting B form a and c form b :[A--->B--->C]
1.A is the base class for  B and B is the base class for C
1. A-->B-->C is called inheritance Path

*/

int main()
{
    Result sangam;
    sangam.set_ROll_number(72);
    sangam.setmarks(90.0,92.0);
    sangam.display();
    return 0;
}