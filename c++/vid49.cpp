#include <iostream>
using namespace std;

/*
    Syntax for initialization of list in constructor:
    constructor (argument-list) : initialization-Section
    
    {
            assingment +Other Code;
    }
class Test
{
    int a,int b;
    public:
    Test(int i,intj):a(i),b(j){cout<<"Constructor Body"<<endl;}
};
*/
class Test
{
    int a;
    int b;
    public:
    // Test(int i,int j):a(i),b(j)
    // Test(int i,int j):a(i),b(i+j)
    // Test(int i,int j):a(i),b(2*j)   
    // Test(int i,int j):a(i),b(a+j)   
    // Test(int i,int j):b(j),a(i+b)   -->Red Flag This will create Problem because a
    // is initialize first
    Test(int i,int j)
    {   a=i;
        b=j;
        cout<<"Constructor Executed "<<endl;
        cout<<"The Value of A is:"<<a<<endl;
        cout<<"The Value of B is:"<<b<<endl;
    }
};


int main()
{
    Test c(4,6);
    
    return 0;
}