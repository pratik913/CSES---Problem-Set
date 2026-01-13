#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
string s;
cin>>s;
int ans=1, count=1;
char ch=s[0];
for(int i=1; i<s.size(); i++){
if(s[i]==ch)count++;
else ch=s[i], ans=max(ans, count), count=1;
}
ans=max(ans, count);
cout<<ans<<"\n";
  return 0;
}