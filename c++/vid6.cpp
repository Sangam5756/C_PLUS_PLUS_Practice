#include <iostream>
// two tyes types of header file
// system define=comes with complier
// user defined=created by programmer
// include"this.h" //it throw error of this.h file not present in current directory
using namespace std;
int main()
{
int a=4,b=5;
cout<<"operator in c++"<<endl;
cout<<"Following are types of operators"<<endl;
cout<<"Arithmatic Operator"<<endl;
cout<<"the value a+b is"<<a+b<<endl;
cout<<"the value a-b is"<<a-b<<endl;
cout<<"the value a*b is"<<a*b<<endl;
cout<<"the value a/b is"<<a/b<<endl;
cout<<"the value a%b is"<<a%b<<endl;
cout<<"the value a++ is"<<a++<<endl;
cout<<"the value a-- is"<<a--<<endl;
cout<<"the value ++a is"<<++a<<endl;
cout<<"the value --a is"<<--a<<endl;

cout<<endl;
cout<<endl;

cout<<"ASSIGNMENT OPERATOR"<<endl;
cout<<"Assignment operator user to assigned values to variables"<<endl;
cout<<"int a=5,b=3"<<endl;
cout<<"char ='w'"<<endl;
cout<<endl;
cout<<endl;



cout<<"COMPARISON OPERATOR"<<endl;

cout<<"the value a==b is:"<<(a==b)<<endl;
cout<<"the value a!=b is:"<<(a!=b)<<endl;
cout<<"the value a<=b is:"<<(a<=b)<<endl;
cout<<"the value a>=b is:"<<(a>=b)<<endl;
cout<<"the value a<b  is:"<<(a<b)<<endl;
cout<<"the value a>b  is:"<<(a>b)<<endl;

cout<<endl;
cout<<endl;

cout<<"LOGICAL OPERATOR"<<endl;
cout<<"the value of logical AND  operator ((a!=b)  && (a<b)) is:"<<((a!=b)  && (a<b))<<endl;
cout<<endl;
cout<<"the value of logical OR   operator ((a!=b)  && (a<b)) is:"<<((a!=b)  || (a<b))<<endl;
cout<<endl;
cout<<"the value of logical NOT  operator  !(a<b) is :"<<!(a<b)<<endl;
return 0;
}