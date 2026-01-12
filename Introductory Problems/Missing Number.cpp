#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
  ll n;
  cin>>n;
  ll sum=n*(n+1)/2;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        sum-=x;
    }
    cout<<sum<<"\n";
  return 0;
}