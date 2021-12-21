Link: https://codeforces.com/problemset/problem/1328/A

#include<bits/stdc++.h>
#define ff unsigned int ttt;cin>>ttt;for(int zzz=0;zzz<ttt;zzz++)
#define ll long long int
#define ui unsigned int
#define ull unsigned long long int
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'
#define Fi(ii,jj) for(int i=ii;i<jj;i++)
#define Fj(iii,jjj) for(int j=iii;j<jjj;j++)
#define strSort(sss) sort(sss.begin(),sss.end())

using namespace std;
void solve();



main(){
    SPEED ff solve();
    }




void solve(){
    ll a,b;
    cin>>a>>b;

    if(a%b==0){
        cout<<"0"<<nl;
    }
    else{
        cout<<(((a/b)+1)*b)-a<<nl;
    }

  }
