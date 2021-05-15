
//https://codeforces.com/contest/467/problem/A

#include<bits/stdc++.h>
using namespace std;
 main(){
        int n,p,q,t=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>p>>q;
            if(q-p>1){
                t++;
            }
 
        }
    cout<<t;
 
}
