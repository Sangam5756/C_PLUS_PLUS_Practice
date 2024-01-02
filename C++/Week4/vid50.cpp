#include <iostream>
using namespace std;


int main()
{   //Basic Example
int a=5;
int *ptr=&a;
// *ptr =999;

    cout<<"The Value of a is :"<<*ptr<<endl;
    // new Keyword
    // int *p= new int(40);
    float *p= new float(40.3);
    cout<<"The Value at Address p is :"<<*p<<endl;
   
   int *arr =new int[3];
   arr[0]=10;
   arr[1]=120;
// *(arr+1)=20;
   arr[2]=30;
//    delete[] arr;
   cout<<"The Value at arr[0] is :"<<arr[0]<<endl;
   cout<<"The Value at arr[1] is :"<<arr[1]<<endl;
   cout<<"The Value at arr[2] is :"<<arr[2]<<endl;

    // Delete Operator
    

    return 0;
}