#include <iostream>
using namespace std;
int main()
{
    // What is pointer --> it is a datatype which hold the address of other
    //  data type
    
    int a=3;
    int *b=&a;
    // & --> Address of operator
    // * --> Dereference operator
    // cout<<*b;        using * we can print the value on that address
    // cout<<&b;      using &  we can print the address of variable
    // cout<<b;        output is same 
    int **c=&b;
     cout<<c<<endl;     // Print address
     cout<<&c<<endl;    // Print address
     cout<<*c<<endl;    // Print address
     cout<<**c;         // print Value

    return 0;
}