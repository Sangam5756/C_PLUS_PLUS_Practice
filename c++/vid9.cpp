#include <iostream>
using namespace std;
int main()
{
// CONTROL Structure in c++
// 1.sequence Structure
// 2.selection Structure
// 3.loop Structure


// SELECTION CONTROL STRUCTURE=IF ELSE -if else ladder
int age;
cout<<"Enter Your Age :";
cin>>age;
// if((age<18) && (age>0)){
//     cout<<"You can not vote";
// }
// else if(age<1)
// {
//     cout<<"Are you ghost";
// }
// else
// {
//     cout<<"You can vote";
// }
// SELECTION CONTROL STRUCTURE= SWITCH 

switch(age)
{
    case 18:
    cout<<"Are you 18"<<endl;
    break;

    case 22:
    cout<<"Are you 22"<<endl;
    break;

    case 2:
    cout<<"Are you 2"<<endl;
    break;

    default:
    cout<<"No special Case"<<endl;
    break;
}
cout<<"Done with switch case";
return 0;
}