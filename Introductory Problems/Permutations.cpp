#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
  int n;
    cin>>n;
    if(n==1)cout<<"1"<<endl;
    
    else if(n<=3)cout<<"NO SOLUTION"<<endl;

    //5= 3 5 2 4 1
    else{
    int mid=n/2;
    int count=n;
    if(n&1)mid++;
    for(int i=0; i<n/2; i++){
        cout<<mid<<" "<<count<<" ";
        mid--;
        count--;
    }
    if(n&1)cout<<mid;
    cout<<endl;
    }
   
     
  return 0;
}