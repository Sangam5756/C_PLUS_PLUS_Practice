// #############################################################

// Imagine a publishing company which does marketing for book and audiocassette versions.
// Create a class publication that stores the title (a string) and price (type float) of a
// publication. From this class derive two classes: book, which adds a page count (type int),
// and tape, which adds a playing time in minutes (type float).
// Write a program that instantiates the book and tape classes, allows user to enter data and
// displays the data members. If an exception is caught, replace all the data member values
// with zero values.
// ****************************************************************************************


// Answer:

// Follow the following steps
// 1.Create a base class publication.
// 2.title and price data members are declared as protected members.
// 3.write a default and parameterised  construtor in a base class to initialize data members(i.e title and price) 
// 4. write a derived class book which has pagecount data member.
// 5.write a constructor of book class which has 3 parameters from which 2 are used to initialize data members of base class and one for its own.
// 6.write a display function to display a members of book (title and price inherited from base class publication and pagecount(its own))
// 7.Follow the same steps for CD class


// Program:

#include <iostream>
#include<string>
using namespace std;
class publication
{
    protected:
    string title;
    float price;
   
    public:
    publication()
    {
        title=" ";
        price=0.0;
        
        }
        publication(string t,float p)
        {
            title=t;
            price=p;
            
            }
           
            
    
    };
    class book : public publication
    {
        int pagecount;
        public:
        book()
        {
            pagecount=0;
            
        }
        //After : base class constructor is called
        book(string t,float p,int pc):publication(t,p)
        {
            
            pagecount=pc;
            
        }
     
     void display()
     {
        
          cout<<"title :"<<title<<endl;
                cout<<"Price: "<<price<<endl;
       
          cout<<"Pagecount :"<<pagecount<<endl;
         
        }
        
    };

 class CD : public publication
    {
        float time;
        public:
        CD()
        {
            time=0.0;
            
        }
        //After : base class constructor is called
        CD(string t,float p,float tim):publication(t,p)
        {
            
            time=tim;
            
        }
     
     void display()
     {
         cout<<"title :"<<title<<endl;
                cout<<"Price: "<<price<<endl;
       
          cout<<"time in minutes :"<<time<<endl;
         
        }
        
    };
int main()
{
    cout<<endl<<"Book data"<<endl;
    book b("C++",230,300);
    b.display();
    cout<<endl<<"CD Data"<<endl;
    CD c("programming",100,120.5);
    c.display();
    return 0;
        }


//OUTPUT

// Book data
// title :C++
// Price: 230
// Pagecount :300

// CD Data
// title :programming
// Price: 100
// time in minutes :120.5