#include <iostream>
using namespace std;

// +++++++BASE CLASS++++++++
class Employee
{  public:
    int id;
  
    float salary;
    public:
    Employee(){}
    Employee(int inpID)
    {
        id =inpID;
        salary =2000;
    }
};
// ++++DERIVED CLASS++++
/*
class {{derived-class-name}} :{{Visibility mode}} {{base class name}}
{
    class member/method etc
}
**********1.Default visibility mode is private
**********2.Private visibility mode :public member of base class  becomes private members of derived class
**********2.public visibility mode :public member of base class  becomes public members of derived class
**********3.private member of base class can not inherits
*/
class Programmer :  public Employee
{
    public:
    int languageCode;
    Programmer(int inpId)
    {
        id =inpId;
        languageCode =9;
        
    }
    void getdata()
    {
        cout<<id<<endl;
    }
};

int main()
{
    Employee sangam(12),sangam1(22);
    // sangam.getdata();
    cout<<sangam.salary<<endl;
    cout<<sangam1.salary<<endl;
    Programmer skillf(10);
    cout<<skillf.languageCode<<endl;
    skillf.getdata();
    
    // cout<<skillf.id<<endl;
    return 0;
}