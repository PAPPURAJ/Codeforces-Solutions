

//Link: https://codeforces.com/contest/1368/problem/A


#include<bits/stdc++.h>
using namespace std;
main(){
    int T,temp;
     cin>>T;
    long long n[T];
    int a[T],b[T];
 
 
 
    for(int i=0;i<T;i++){
        cin>>a[i]>>b[i]>>n[i];
 
    }
for(int i=0;i<T;i++){
    temp=0;
    while(b[i]<=n[i] && a[i]<=n[i]){
 
      if(a[i]+b[i]*2>b[i]+a[i]*2)
        a[i]+=b[i];
 
      else
        b[i]+=a[i];
 
    temp++;
 
    }
    cout<<temp<<endl;}
 
}
 
