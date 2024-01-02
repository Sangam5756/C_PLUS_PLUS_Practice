// // #include <iostream>
// // using namespace std;
// // class num
// // {
// //     int a;
// //     int count=0;
// //     public:
    
// //     num()
// //     {    count++;
// //         cout<<"Constructor called "<<count<<endl;
    
// //     }
    
    
// //     ~num()
// //     {   count--;
// //             cout<<"Destructor called"<<count<<endl;
            
// //     }
// // };


// // int main()
// // {
// //     num x,y;
 
        
// //     return 0;
// // }
// #include <iostream>
// using namespace std;
// class constructor
// {
//     int a,b;
//     public:
//     constructor(){}
//     constructor(int a1,int b1)
//     {
//         cout<<"Parameterized constructor "<<endl;
//         a=a1;
//         b=b1;
//         cout<<"The Passing parameters are :"<<a<<" "<<b<<endl;
//     }
//     ~constructor()
//     {
//         cout<<"Object is Deleted"<<endl;
//     }
// };
// int main()
// {
//   constructor a(10,20);
//     return 0;
// }
#include <iostream>
using namespace std;
class num{
    static int count;
    int a;
    public:
    void fun(int a1)
    {
        a=a1;
        cout<<"A is "<<a<<endl;
    }
    static void fun1()
    {
        cout<<"Static member function"<<endl;
        cout<<"Static member function with default value is "<<count<<endl;
    }

};
int num::count;
int main()
{
    num a;
    a.fun(10);
    a.fun1();
    
    return 0;
}




















