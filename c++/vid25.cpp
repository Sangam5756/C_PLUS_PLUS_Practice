#include <iostream>
using namespace std;

class Employee
{
    int Id;
    int salary;
    public:
        void setId(void)
        {
            salary =1000;
            cout<<"Enter The Id Of Employee :"<<endl;
            cin>>Id;
        }
        void getdata(void)
        {
            cout<<"The Id of The Employee is :"<<Id<<" And Salary is "<<salary<<endl;
        }
};

int main()
{
  Employee sangam;
  sangam.setId();
  sangam.getdata(); 
  
  
    return 0;
}