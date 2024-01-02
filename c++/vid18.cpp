#include <iostream>
using namespace std;

int factorrial(int a)
{
    if(a<=1)
    {
        return a;
    }
    return a*factorrial(a-1);
}
int fib(int a)

{
    if(a<=2)
{
    return 1;
}
    return fib(a-2) + fib(a-1);
}
int main()
{

 int n;
 cout<<"Enter The Number:";
 cin>>n;
//  cout<<"factorail of "<<n<<" is :"<<factorrial(n);
 cout<<"fibonacci of "<<n<<" is :"<<fib(n);
    return 0;
}