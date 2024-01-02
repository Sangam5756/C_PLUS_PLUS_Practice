#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
// int a=4;
// cout<<"the value of a is:"<<a;
// a=5;
// cout<<"the value of a is:"<<a;
// const int a=34;
// cout<<"the value of a is:"<<a;
// a=45; //constant value can not be changed



// setw() it is a manipulator which used to format the document
// int a=1,b=2,c=222,d=2344;
// cout<<"the value of a is:"<<a<<endl;
// cout<<"the value of a is:"<<b<<endl;
// cout<<"the value of a is:"<<c<<endl;
// cout<<"the value of a is:"<<d<<endl;


// cout<<"the value of a is:"<<setw(4)<<a<<endl;
// cout<<"the value of a is:"<<setw(4)<<b<<endl;
// cout<<"the value of a is:"<<setw(4)<<c<<endl;
// cout<<"the value of a is:"<<setw(4)<<d<<endl;



// operator precedence
// link --https://en.cppreference.com/w/cpp/language/operator_precedence
int a=2,b=3;
int c=((((a*b)+b)+54)-65);
cout<<c;
return 0;
}