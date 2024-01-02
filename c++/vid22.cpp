   //  Oops Classes and objects
    
    // C++   --> Initially called --> c with Classes stroustroup
    // Class --> Extension  of structure (in c)
    // Structure had limitation
    //       --> Members are public
    //       --> No methods

    // Classes --> structure + more
    // Classes --> can have methods and  properties  
    // Classes --> can make few members as private and few as public
    //structures in c++ are typedef
    //you can declare object along with class  declaration like this
        /*
            class Employee
            {
                //class Definition
            }sangam,manoj,abhay;
        */
        //sangam.sallary =100 --> makes no sence if salary is private
        //Nesting Member Function  

#include <iostream>
#include <string>

using namespace std;

 class binary
{
    string s;
    void chk_bin(void);
    public:
        void read(void);
        // void chk_bin(void);
        void ones(void);
        void Display(void);
};
void  binary :: read(void)
{
    cout<<"Enter The Binary Number"<<endl;
    cin>>s;
}
void binary :: chk_bin(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary Format:"<<endl;
            exit(0);
        }
    }
}
void binary ::ones(void)

{chk_bin();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}
void binary ::Display (void)
{cout<<"Displaying our Binary Number"<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.ones();
    b.Display();

    return 0;
}