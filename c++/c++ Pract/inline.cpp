#include <iostream> 
using namespace std; 
  
inline int max(int a, int b) 
{ 
   return (a >b)?a : b; 
} 
   
int main() 
{ 
   cout << "Max (20,10) is " << max(20,10) << endl; 
   cout << "Max (0,200) is " << max(0,200) << endl; 
   cout << "Max (100,1010) is " << max(100,1010) << endl; 
   return 0; 
}
