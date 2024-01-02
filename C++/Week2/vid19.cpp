#include <iostream>
using namespace std;

int add(int a,int b)
{
    cout<<"using functon with 2 argumnets"<<endl;
    return a+b;
}
int add(int a,int b,int c)
{cout<<"using functon with 3 argumnets"<<endl;
    return a+b+c;
}
//calculate the volume of cylinder
int volume(double r,int h)
{
    return (3.14*r*r*h);
}
//calculate the volume of cube
int volume(int a)
{
    return (a*a*a);
}
//calculate volume of rectangle
int volume(int l,int b,int h)
{
    return (l*b*h);
}

int main()
{
    cout<<"the sum of 10 and 20 is "<<add(10,20)<<endl;
    cout<<"the sum of 10 and 20 and 10 is "<<add(10,20,10)<<endl;
    cout<<"the volume of cylinder is :"<<volume(3,4)<<endl;
    cout<<"the volume of cube is :"<<volume(3)<<endl;
    cout<<"the volume of rectangle is :"<<volume(3,5,7)<<endl;

    return 0;
}