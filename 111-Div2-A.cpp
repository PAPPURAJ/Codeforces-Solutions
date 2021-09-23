A. Twins
Link: https://codeforces.com/contest/160/problem/A


#include<bits/stdc++.h>
using namespace std;
 main(){
     int n;
     cin>>n;
     int a[n],sum=0,temp=0;
     for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
     }
  
 
       int s = sizeof(a)/sizeof(a[0]);
        sum/=2;
        sort(a, a+s, greater<int>());
        for(int i=0;i<n;i++){
            temp+=a[i];
            if(temp>sum)
            {
 
                cout<<i+1;
                break;
            }
 
     }
}
