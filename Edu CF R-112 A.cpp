#include<bits/stdc++.h>
#define ff unsigned int ttt;cin>>ttt;for(int zzz=0;zzz<ttt;zzz++)
#define ll long long
#define ui unsigned int
#define ull unsigned long long int
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'
#define Fi(ii,jj) for(int i=ii;i<jj;i++)
#define Fj(iii,jjj) for(int j=iii;j<jjj;j++)
#define abss(x)   if(x<0)x=x*-1
#define mini(a,b) a<b? a:b
 
using namespace std;
void solve();
 
 
 
int main(){
    SPEED // solve();
    int in;
    cin>>in;
    Fi(0,in)
        solve();
        return 0;
    }
 
 
 
 
void solve(){
    ll n;
    cin>>n;
    if(n<7)
        cout<<15;
    else
        n^2?cout<<(++n/2)*5:cout<<(n/2)*5;
        cout<<nl;
    }
