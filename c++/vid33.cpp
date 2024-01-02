#include <iostream>
using namespace std;

class BankDiposit
{
    int principal;
    int years;
    float interestRate;
    float ReturnValue;
    public:
    BankDiposit();
    BankDiposit(int p,int y,float r);
    BankDiposit(int p,int y,int R);
   void show(){
    {
    cout<<"the principal value is "<<principal<<"return Value after"<<years
    <<" years is "<<ReturnValue;
}

   }
};



BankDiposit::BankDiposit(int p,int y,float r)
{
    principal =p;
    years =y;
    interestRate =r;
    ReturnValue =0;
    for(int i=0;i<y;i++)
    {
        ReturnValue = principal * interestRate;
    }
};



BankDiposit::BankDiposit(int p,int y,int r)
{
    principal =p;
    years =y;
    interestRate =float(r)/100;
    ReturnValue =0;
    for(int i=0;i<y;i++)
    {
        ReturnValue = principal * interestRate;
    }
}

int main()
{
    BankDiposit bd1,bd2,bd3;
    int p,y,r,R;
    bd1 =BankDiposit(p,y,r);
    cout<<"Enter The Principal Amount"<<p;
    cout<<"Enter The Years :"<<y;
    cout<<"Enter The interest Rate :"<<r;
    bd1.show();
    bd2=BankDiposit(p,y,R);
    cout<<"Enter The interest Rate :"<<R;
    bd2.show();

    return 0;
}