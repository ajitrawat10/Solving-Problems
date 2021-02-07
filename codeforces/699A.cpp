#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define fr first
#define sc second
#define pii pair<int,int>
 
const int N = 2005;
const int MOD = 1e9 + 7;
 
int fact[N], invfact[N];
 
int pow(int a, int b, int m)
{
    int ans=1;
    a=a%MOD;
    while(b)
    {
        if(b&1)
            ans=(ans*a)%m;
        b/=2;
        a=(a*a)%m;
    }
    return ans;
}
 
int modinv(int k)
{
    return pow(k, MOD-2, MOD);
}
 
void precompute()
{
    fact[0]=fact[1]=1;
    for(int i=2;i<=N;i++)
    {
        fact[i]=fact[i-1]*i;
        fact[i]%=MOD;
    }
    invfact[N-1]=modinv(fact[N-1]);
    for(int i=N-2;i>=0;i--)
    {
        invfact[i]=invfact[i+1]*(i+1);
        invfact[i]%=MOD;
    }
}
 
int nCr(int n, int r)
{
    if (r>n || r<0 || n<0)
        return 0;
 
    return fact[n]*invfact[r]%MOD*invfact[n-r]%MOD;
}
 
 
 
 
signed main(){
 #ifndef ONLINE_JUDGE 
 freopen("input.txt", "r", stdin); 
 freopen("output.txt", "w", stdout); 
 #endif 
 
int t;
cin >> t;
while(t--){
    int x,y;
    cin >> x >> y;
    string s;
    cin >> s;
    int dx=x;
    int dy=y;
    if (dx>=0 && dy>=0){
     int cntx=count(s.begin(), s.end(),'R');
     int cnty=count(s.begin(), s.end(),'U');
     if (cntx>=abs(dx) && cnty>=abs(dy)){
        cout<<"YES\n";
     }
     else{
        cout<<"NO\n";
     }
 
    }
    else if (dx<=0 && dy>=0){
    int cntx=count(s.begin(), s.end(),'L');
     int cnty=count(s.begin(), s.end(),'U');
     if (cntx>=abs(dx) && cnty>=abs(dy)){
        cout<<"YES\n";
     }
     else{
        cout<<"NO\n";
     }
    }
    else if (dx<=0 && dy<=0){
     int cntx=count(s.begin(), s.end(),'L');
     int cnty=count(s.begin(), s.end(),'D');
     if (cntx>=abs(dx) && cnty>=abs(dy)){
        cout<<"YES\n";
     }
     else{
        cout<<"NO\n";
     }
    }
    else if (dx>=0 && dy<=0){
      int cntx=count(s.begin(), s.end(),'R');
     int cnty=count(s.begin(), s.end(),'D');
     if (cntx>=abs(dx) && cnty>=abs(dy)){
        cout<<"YES\n";
     }
     else{
        cout<<"NO\n";
     }
    }
}
 
 
 
    return 0;
 
}
