#include <iostream>
using namespace std;
// Destructor never take any arguments or does not return any value
int count =0;
class num{
    public:
    num()
    {
        count ++;
        cout<<"Constructor is called for object number"<<count<<endl;
    }
    ~num()
    {
        cout<<"This is time when destructor is called for object number "<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"We are inside the main function"<<endl;
    cout<<"We are creating first object n1"<<endl;
    num n1;
    {
        cout<<"ENtering this blocs"<<endl;
        cout<<"Creating two more objects"<<endl;
        num  n2,n3;
        cout<<"Exiting form this block"<<endl;
    }
    cout<<"back to main function"<<endl;

    

    return 0;
}