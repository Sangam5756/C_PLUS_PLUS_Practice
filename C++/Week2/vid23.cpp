#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemprice[100];
    int counter;
    public:
        void initcounter(void) {counter =0;}
        void setprice();
        void dispprice();
};
void shop :: setprice(void)
{
    cout<<"Enter Id of your Item :";
    cin>>itemId[counter];
    cout<<"Enter Price of your Item :";
    cin>>itemprice[counter];
    counter++;
}
void shop ::dispprice(void)
{
    for (int i=0;i<counter;i++)
    {
        cout<<"the price of item with id"<<itemId[i]<<"is"<<itemprice[i]<<endl;
    }
}

int main()
{
shop sangam;
sangam.initcounter();
sangam.setprice();
sangam.setprice();
sangam.setprice();
sangam.dispprice();    
    return 0;
}
/*#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemprice[100];
    int counter;
    public:
        void initcounter(void); //{counter =0;}
        void setprice();
        void dispprice();
};
void shop ::initcounter(void)
{
    cout<<"ENter Item no you want to add:";
    cin>>counter;
}
void shop :: setprice(void)
{for(int i=0;i<counter;i++){
    cout<<"Enter Id of your Item :";
    cin>>itemId[counter];
    cout<<"Enter Price of your Item :";
    cin>>itemprice[counter];
    }
}
void shop ::dispprice(void)
{
    for (int i=0;i<counter;i++)
    {
        cout<<"the price of item with id"<<itemId[i]<<"is"<<itemprice[i]<<endl;
    }
}

int main()
{
shop sangam;
sangam.initcounter();
sangam.setprice();

sangam.dispprice();    
    return 0;
}*/