#include <iostream>
#include <fstream>
using namespace std;

/*
The useful classes to work with files
1,fstreamBase
2.ifstream --->Derived form fstreamBase
2.ofstream --->Derived form fstreamBase 

In order to work with file in c++,you have to open it,primarily There are 2 ways to open file
1.Using Constructor
2.Using Member functio open() of the class
*/
int main()
{
    string st ="Sangam Bhai";
    string st2;
    // // opening file using Constructor and Writing to it
    // ofstream out("sample60.txt"); // Write Operation
    // out<<st;
    // opening file using Constructor and Reading to it
    ifstream in("sample60_b.txt"); // Read Operation
    // in>>st2;
    getline(in,st2);
    // getline(in,st2);
    cout<<st2;

    
    
    return 0;
}