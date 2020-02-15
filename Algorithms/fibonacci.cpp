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



/*
 Second method
 It is an Memoization way to find nth fibonacci number.
 Its time complexity is O(n).
 */

 #include<iostream>
 using namespace std;
 int fib(int n){
     int a[n+1];
   a[1]=1;
   a[2]=1;
 for (int i=3;i<=n;i++){
    a[i]=a[i-1]+a[i-2];
 }
 return a[n];

 }
 int main(){
   int n=5;
   cout<<fib(n);
 }

