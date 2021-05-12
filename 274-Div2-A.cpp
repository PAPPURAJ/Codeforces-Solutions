A. Expression
--------------
Link: https://codeforces.com/contest/479/problem/A



#include<bits/stdc++.h>
#define ff unsigned int ttt;cin>>ttt;for(int zzz=0;zzz<ttt;zzz++)
#define ll long long int
#define ui unsigned int
#define ull unsigned long long int
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'
#define Fi(ii,jj) for(int i=ii;i<jj;i++)
#define Fj(iii,jjj) for(int j=iii;j<jjj;j++)
 
using namespace std;
void solve();
 
 
 
main(){
    SPEED  solve();
    }
 
 
 
 
void solve(){
    int a,b,c;
        cin>>a>>b>>c;
        cout<<max(max(max(a+b+c,(a+b)*c),a*(b+c)),a*b*c);
    }
 
