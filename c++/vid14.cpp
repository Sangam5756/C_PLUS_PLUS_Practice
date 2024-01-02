#include <iostream>
using namespace std;


    typedef struct  employee
    {
        int eid;
        char favchar;
        float salary;
    }ep;


    // union money
    // {
    //     int rice;   //4
    //     char car;       //1
    //     float pound;        //4
    // };
    

int main()
{
//     union money m1;
//     m1.rice=23;
//     cout<<m1.rice;
// enum meal{breakfast,lunch,dinner};

// for(int i=0;i<3;i++)
// {
//     cout<<meal(i)<<endl;
// }


    ep harry;
    ep sangam;
    ep manoj;
    harry.eid=123;
    harry.favchar='d';
    harry.salary=120000;

    cout<<harry.eid<<endl;
    cout<<harry.favchar<<endl;
    cout<<harry.salary<<endl;



    return 0;
}