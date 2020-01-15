#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
  long long int n,c1,c2;
  cin>>n;
  long long int a[n],b[n-1],c[n-2];
  for (int i=0;i<n;i++){
      cin>>a[i];
  }
   for (int i=0;i<n-1;i++){
      cin>>b[i];
  }
   for (int i=0;i<n-2;i++){
      cin>>c[i];
  }
  sort(a,a+n);
  sort(b,b+n-1);
  sort(c,c+n-2);
  for (int i=0;i<n;i++){
      if (a[i]!=b[i]){
          c1=a[i];
          break;
      }
  }
  for (int i=0;i<n-1;i++){
      if (b[i]!=c[i]){
          c2=b[i];
          break;
      }
  }
  cout<<c1<<endl;
  cout<<c2<<endl;
    return 0;
}
