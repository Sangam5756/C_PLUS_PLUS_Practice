#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream out;
    out.open("sample60.txt");
    out<<"This Is me"<<endl;
    out<<"This Is me2"<<endl;
    out<<"This Is me3"<<endl;
   
   out.close();
    
    ifstream in;
    string st,st2;
    in.open("sample60.txt");
    // in>>st>>st2;
    // cout<<st<<st2;
    while(in.eof()== 0)
    {
        getline(in,st);
        cout<<st<<endl;
    }


    in.close();
    return 0;
}