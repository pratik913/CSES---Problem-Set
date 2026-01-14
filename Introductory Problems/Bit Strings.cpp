#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
 ll n;
 cin>>n;
 ll ans=1;
 ll mod=1e9+7;
 while(n--){
    ans=ans<<1;
    ans=ans%mod;
 }
 cout<<ans<<endl;
  return 0;
}