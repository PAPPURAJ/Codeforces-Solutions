Link: https://codeforces.com/contest/1375/problem/A

#include<bits/stdc++.h>
#define ff unsigned int ttt;cin>>ttt;for(int zzz=0;zzz<ttt;zzz++)
#define ll long long int
#define ui unsigned int
#define ull unsigned long long int
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n';
 
using namespace std;
void solve();
 
 
 
main(){
    FAST
     ff  solve();
    }
 


 
void solve(){
 int n,p;
 cin>>n;
 for(int i=0;i<n;i++){
    cin>>p;
    (i&1)?cout<<-abs(p)<<" ":cout<<abs(p)<<" ";
 }
 
cout<<nl;
}
