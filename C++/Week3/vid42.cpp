#include <iostream>
#include <cmath>
using namespace std;
class simple_calculator
{
    int a;
    int b;
    public:
    void setdata()
    {
        cout<<"Enter The Number 1:"<<endl;
        cin>>a;
        cout<<"Enter The Number 2:"<<endl;
        cin>>b;

    }
    void simple_operation()
    {
        cout<<"the sum  of no1 and num2 is ="<<a+b<<endl;
        cout<<"the sub  of no1 and num2 is ="<<a-b<<endl;
        cout<<"the mult of no1 and num2 is ="<<a*b<<endl;
        cout<<"the div  of no1 and num2 is ="<<a/b<<endl;
    }
};
class Scientific_calculator
{
    int a,b;
    public:
    void Scientific_operation()
    {
        cout<<"the cos(a)  of no1 and num2 is ="<<cos(a)<<endl;
        cout<<"the sin(a)  of no1 and num2 is ="<<sin(a)<<endl;
        cout<<"the exp(a)  of no1 and num2 is ="<<exp(a)<<endl;
        cout<<"the tan(a)  of no1 and num2 is ="<<tan(a)<<endl;
    }
};
class hybrid:public simple_calculator,public Scientific_calculator
{

};

int main()
{
    hybrid sangam;
    sangam.setdata();
    sangam.simple_operation();
    sangam.Scientific_operation();
    return 0;
}