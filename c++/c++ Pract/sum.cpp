// write a program to find the sum of an array arr by passing an array to a function using pointers

#include <iostream>
using namespace std;
void sum(int *arr, int n)//Using Function
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum +arr[i];
    }
    cout<<"Sum of arr is :"<<sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(int);
    sum(arr, n);
    return 0;
}