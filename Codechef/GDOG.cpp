#include<iostream>
using namespace std;

int main()
{
    long int t,n,k,r,i;
    cin>>t;
    while(t--)
    {
        r=0;
        cin>>n>>k;
        for(i=2;i<=k;++i)
        {
            if(n%i>r)
                r=n%i;
        }
        cout<<r<<endl;
    }
    return 0;
}
