#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // connecting file with hout stream 
    ofstream hout("sample60.txt");
    
    // Creating the name string fill it with the string entered By the User
    string name;
    cout<<"Enter Your Name :";
    getline(cin,name);
    // Writing string To the File
    hout<<"My Name is "<<name<<endl;
    hout.close();
    ifstream hin("sample60.txt");
    string content;
    getline(hin,content);
    cout<<content;
    hin.close();
    
    return 0;
}