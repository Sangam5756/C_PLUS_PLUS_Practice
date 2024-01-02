#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;
    public:
    void setData(int a, float b)
    {
        id=a;
        price=b;
    }
    void getData()
    {
        cout<<"The Code of this Item is :"<<id<<endl;
        cout<<"The price of this Item is :"<<price<<endl;
    }

};
int main()
{
    int size =3 ;
    // int *ptr =&size;
    // int *ptr =new int[24];
    Shop *ptr =new Shop[size];
    ptr->setData(10,100);
    ptr->getData();
    ptr->setData(2,200);
    ptr->getData();
    ptr->setData(3,300);
    ptr->getData();
    return 0;
}