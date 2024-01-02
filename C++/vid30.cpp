#include <iostream>
using namespace std;

class Complex
{
int a ,b;
    public:
 
 Complex(int,int); //constructor Declaration

void printdata()
{
 
    cout<<"Your Number  is "<<a<<" + "<<b<<"i"<<endl;
}
};
Complex ::Complex(int x,int y) //This is parameterized Constructor as 
//it takes no parameter
{
    a=x;
    b=y;
}
int main()
{
        //implicit call
    Complex a(4,6);

    //Explicit call
    Complex b =Complex(5,6);
    
    a.printdata();   
    b.printdata();   
    return 0;
}