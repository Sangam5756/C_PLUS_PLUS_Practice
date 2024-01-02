#include <iostream>
using namespace std;
int n;
#define size 10
template<class T>
int sort( T arr[size])
{9
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
   
}
int main()
{
    

    int n;
    cout<<"How many element you want to store in array :";
    cin>>n;
  int  arr[n];
   for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    sort(arr);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}