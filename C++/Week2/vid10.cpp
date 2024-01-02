#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
/*
    LOOPS IN C++
        There are three types of loop
    1.for loop
    2.while loop
    3.do while loop
    */
    // Syntax for for loop

    // for(initialization;condition;updation)
    // {
    //     loop Body(c++ code);
    // }


// EXAMPLE OF FINITE LOOP
// for(int i=0;i<20;i++)
// {
//     cout<<setw(2)<<i<<endl;
// }
// EXAMPLE OF INFINITE FOR LOOP
// for(int i=0;15<20;i++)
// {
//     cout<<setw(2)<<i<<endl;
// }

/*
WHILE LOOP
    SYNTAX:
        while(condition)
        {
            c++ statement;
        }
    */
// printing 1 to 20 using while loop
// EXAMPLE OF FINITE while loop;
// int i=0;

// while(i<=20)
// {
//     cout<<i<<endl;
//     i++;    
// }
// EXAMPLE OF INFINITE while loop;
// int i=0;

// while(12<=20)
// {
//     cout<<i<<endl;
//     +;    
// }i+
// EXAMPLE OF INFINITE while loop; 2
int i=0;

while(true)
{
    cout<<i<<endl;
    i++;    
}
/*
DO WHILE LOOP IN C++
    SYNTAX:
    do
    {
        c++ statements;
    }
    while(condition);
*/
// int i=1;
// do
// {
//     cout<<i<<endl;
//     i++;
// }
// while(i<=20);
// condition will check for 1 time if condition is false;
// do
// {
//     cout<<i<<endl;
//     i++;
// }
// while(false);



// multiplication using for loop;
// int n;
// cout<<"Enter the number to display multiplication number :";
// cin>>n;
// // for(int i=1;i<=10;i++)
// // {   int c=i*n;
// //     cout<<c<<endl;
// // }
// for(int i=1;i<10;i++)
// {
//     int c=i*n;
//     cout<<c<<endl;
// }
return 0;
}