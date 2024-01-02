#include <iostream>
using namespace std;

class BaseClass
{
    public:
    int var_base;
    void Display()
    {
        cout<<"The Value of var_base is :"<<var_base<<endl;
    }

};
class DerivedClass:public BaseClass
{   
    public:
    int var_derived;
    void Display()
    {
        cout<<"The Value of var_base is :"<<var_base<<endl;
        cout<<"The Value of var_derived is :"<<var_derived<<endl;
    }

};

int main()
{
    // BaseClass *base_class_pointer;
    // DerivedClass *derived_class_pointer;
    // BaseClass obj_base;
    DerivedClass obj_derived;
    // base_class_pointer =&obj_derived;
    // base_class_pointer->var_base=20;
    // base_class_pointer->Display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer =&obj_derived;
    derived_class_pointer->var_derived =54;
    derived_class_pointer->Display();

    return 0;
}