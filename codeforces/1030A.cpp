#include <bits/stdc++.h>
using namespace std;
int main() {
int n,x;
int cnt(0);
cin>>n;
for (int i=0;i<n;i++){
    cin>>x;
    if (x==1){
        cnt=1;
 
    }
}
if (cnt==1){
    cout<<"HARD"<<endl;
}
else{
    cout<<"EASY"<<endl;
}
return 0;
}
