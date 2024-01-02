#include <iostream>
using namespace std;

void swap(int a ,int b)
{
int temp= a;
    a=b;
    b=temp;
}
// CAll by reference using pointers
void swap_pointers(int * a ,int * b)
{
int temp= *a;
    *a= *b;
    *b=temp;
}
void swap_reference(int &a ,int &b)
{
int temp= a;
    a=b;
    b=temp;
}
int main()
{
    
    int  a=1 ,b=2;
    cout<<"The Value of  a is "<<a<<" The Value of b is "<<b<<endl;
    // swap(a,b); //This will not swap a and b 
    swap_pointers(&a,&b); 
    // swap_reference(a,b); 
    cout<<"The Value of a is "<<a<<" The Value of b is "<<b;


    return 0;
}