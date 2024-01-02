#include <iostream>
using namespace std;
// Function Prototype
// type Function-names(arguments)
// int sum(int a,int b);   //acceptable
int sum(int,int);       //acceptable
// int sum(int,a);         // not acceptable
// void g(void) //acceptable
void g();     //acceptable

int main()
{
    int  num1,num2;
// num1 and num2 are actual paramenters
    cout<<"Enter The Number 1:";cin>>num1;
    cout<<"Enter The Number 2:";cin>>num2;
    cout<<"Sum is :"<<sum(num1,num2);
    return 0;
}
int sum(int a,int b)
{//Formal parameters ---> a and b will be taking values from  actual paramenters
    return a+b;
}
void g()
{
    cout<<"\n Hello Good Morning";
}