//https://codeforces.com/contest/734/problem/A

#include<bits/stdc++.h>
using namespace std;
 main(){
 
   long int n;
   int d=0,a=0;
   char c;
 
   cin>>n;
   while(n--){
    cin>>c;
    if(c=='A'){
        a++;
    }
    else if(c=='D'){
        d++;
    }
   }
 
   if(d==a)
    cout<<"Friendship";
   else if(d>a)
    cout<<"Danik";
   else
    cout<<"Anton";
 
}
 
