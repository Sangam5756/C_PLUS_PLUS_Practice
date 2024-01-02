#include <iostream>
using namespace std;

class Base{
    
    protected:
    int a=10;

    private:
    int b;

};
/* a  For protected memeber

                          Public Derivation        private Derivation       Protected Derivation      
                         
1.private   Members        Not inherited              Not inherited              Not inherited
2.protected members        protected                  Private                    Protected
3.public    members         Public                    private                   Protected



*/
class Derived:Base
{
    public:
    void print()
    {
        cout<<a;
    }
};
int main()
{
    Derived d;
    Base o;
    d.print();

    return 0;
}