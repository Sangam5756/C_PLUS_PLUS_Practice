#include <iostream>
using namespace std;

class  Student
{
    protected:
    int Roll_number;
    public:
    void setnumber(int a)
    {
        Roll_number =a;
    }
    void printnumber()
    {
        cout<<"Your Roll Number is :"<<Roll_number<<endl;
    }

};
class Test :virtual public Student
{   
    protected:
    float math;
    float physics;
    public:
    void set_marks(float m1,float m2)
    {
        math= m1;
        physics =m2;
    }
    void print_marks()
    {
        cout<<"Your result is here: "<<endl
            <<"Math ="<<math<<endl
            <<"Physics="<<physics<<endl;
    }
};
class Sports :virtual public Student
{
    protected:
    float score;
    public:
    void set_score(float sc)
    {
        score =sc;
    }
    void print_score()
    {
        cout<<"Your  PT score is :"<<score<<endl;
    }
};
class Result :public Test,public Sports
{
    private:
    float total;
    public:
    void  display(void){
        total =math+physics+score;
        
        print_marks();
        print_score();
        printnumber();
        cout<<"Yout Total Score is :"<<total<<endl;
    }
};
int main()
{
    Result s;
    s.setnumber(72);
    s.set_marks(75.32,80.67);
    s.set_score(70.88);
    s.display();

    
    return 0;
}