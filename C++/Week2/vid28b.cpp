#include <iostream>
using namespace std;

class c2;
class c1
{
    int val;
    friend void exchange(c1 &,c2 &);
    public:
    void indata()
    {
        cout<<"Enter The value to swap 1:";
        cin>>val;
    }
    void display(void) 
    {
        cout<<val<<endl;
    }
};
class c2
{
 
    int val2;
    friend void exchange(c1 &,c2 &);
    public:
    void indata()
    {
        cout<<"Enter The value to swap 2 :";
        cin>>val2;
    }
    void display(void) 
    {
        cout<<val2;
    }
};

void exchange(c1 &x,c2 &y)
{
int  temp = x.val;
    x.val=y.val2;
    y.val2=temp;
}
int main()
{
    c1 oc1;
    c2 oc2;
    oc1.indata();
    oc2.indata();
    exchange(oc1,oc2);
    cout<<"The value after Exchange of o1 ";
    oc1.display();
    cout<<"The value after Exchange of o2 ";
    oc2.display();
    return 0;
}