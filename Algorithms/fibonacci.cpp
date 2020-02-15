//The Fibonacci Sequence is 1,1,2,3,5,8,13,............


/*
first method 
This is an Recursion approach.
Its time complexity is O(2^n).
*/

#include<iostream>
using namespace std;

int fib(int n){
if (n<=1)
    return n;
else
    return fib(n-1)+fib(n-2);
}

int main(){
   int n=5;
   cout<<fib(n);

 }
