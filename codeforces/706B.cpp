#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,q,i,j,x;
    cin>>n;
    int a[n+10];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>q;
    sort(a,a+n);
    for(i=0;i<q;i++){
       cin>>x;
       int ans=upper_bound(a,a+n,x)-a;
       cout<<ans<<endl;
    }
    return 0;
}
