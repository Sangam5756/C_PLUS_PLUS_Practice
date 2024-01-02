#include <iostream>
using namespace std;

class Employee
{
    int Id;
    static int count;
    public:
    void setdata(void)
    {
        cout<<"Enter The Id of Employee :"<<endl;
        cin>>Id;
        count++;
    }
    void getdata(void)
    {
        cout<<"Id of  Employee :"<<Id<<" and Employee No is :"<<count<<endl;
    }
    static void getCount(void)
    {
        cout<<"The value of count is"<<count<<endl;
    }
};
int Employee :: count; //Defau;t value is 0
int main()
{
    Employee sangam;

    sangam.setdata();
     Employee::getCount();
    sangam.getdata();
   
    return 0;
}