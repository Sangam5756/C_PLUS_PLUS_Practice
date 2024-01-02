#include <iostream>
using namespace std;
int main()
{
    
    int marks[4]={23,45,67,88};
//     cout<<"These Are maths"<<endl;
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     //You can change the value of array
//     marks[2]=233;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;

// cout<<"These Are Math marks"<<endl;
//    int  marksmath[4];
//     marksmath[0]=32;
//     marksmath[1]=56;
//     marksmath[2]=76;
//     marksmath[3]=86;
//     cout<<marksmath[0]<<endl;
//     cout<<marksmath[1]<<endl;
//     cout<<marksmath[2]<<endl;
//     cout<<marksmath[3]<<endl;
    
    // using for loop
    // for(int i=0;i<4;i++)
    // {
    //     cout<<marks[i]<<endl;
    // }
    // USING WHILE loop
    // int i=0;
    // while(i<4)
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    //     // break;
    // }
    // Using do while loop
    
    // int i=0;
    // do
    //     {
    //     cout<<marks[i]<<endl;
    //     i++;
    // }while(i<4);

// POINTER AND array IN C++

int *p=marks;

cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
// cout<<"The value of marks [0] is :"<<*p<<endl;
// cout<<"The value of marks  *(p+1) is :"<<*(p+1)<<endl;
// cout<<"The value of marks  *(p+2) is :"<<*(p+2)<<endl;
// cout<<"The value of marks  *(p+3) is :"<<*(p+3)<<endl;

    return 0;
}