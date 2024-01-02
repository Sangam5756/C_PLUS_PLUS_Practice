#include <iostream>
using namespace std;
//                              CONSTRUCTOR WITH DEFAULT ARGUMENTS
class Simple
{
    int data1;
    int data2;
    int data3;
    public:
    void setdata(int a, int b=9,int c=8)
    {
        data1=a;
        data2=b;
        data3=c;
   }
   void printdata();
};
void Simple::printdata()
   {
    cout<<"The value of data is   "<<data1<<","<<data2<<" and "<<data2<<endl;
   }

int main()
{
    Simple c1;
    c1.setdata(5);
    c1.printdata();
    return 0;
}
