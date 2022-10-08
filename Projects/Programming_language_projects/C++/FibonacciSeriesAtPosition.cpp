/* To know the number of Fibonacci Series at a position given by User */

#include<iostream>
using namespace std; 
 
  int fib(int n){
        if(n<=2){
             return 1;
        }
        return fib(n-1)+fib(n-2);
  }
        
int main() { 
   int n;
     cout<<"Enter the position : ";
       cin>>n;
         cout<<"The fibonacci number at position "<<n<<" is "<<fib(n);
return 0; 
}
