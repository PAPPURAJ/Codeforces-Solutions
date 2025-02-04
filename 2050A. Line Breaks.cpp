#include<bits/stdc++.h>
#include <algorithm>
#define multipleTest unsigned int ttt;cin>>ttt;for(int zzz=0;zzz<ttt;zzz++)
#define ll long long 
#define ui unsigned int
#define ull unsigned long long int
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'
#define Fi(ii,jj) for(ll i=ii;i<jj;i++)
#define Fid(ii,jj) for(ll i=jj-1;i>=ii;i--)
#define Fj(iii,jjj) for(int j=iii;j<jjj;j++)
#define Fk(iiii,jjjj) for(int k=iiii;k<jjjj;k++)
#define strSort(sss) sort(sss.begin(),sss.end())
#define intArSort(arr) sort(arr, arr + sizeof(arr) / sizeof(arr[0]))
#define TEST freopen ("CF_in.txt","r",stdin);freopen ("CF_out.txt","w",stdout);
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define MOD 1000000007


using namespace std;
void solve();
 
int main(){
      //  TEST
        SPEED  
        multipleTest
        solve();  
        return 0;
    }




void solve(){

    int n,m,t=0,ans=0;
    cin>>n>>m;
    bool check=true;


    Fi(0,n){
        string s;
        cin>>s;
        int l=s.length(); 
        if(t+l<=m && check){
            ans=i+1;
            t+=l;
        }
        else{
            check=false;
        }
    }
    cout<<ans<<nl;
}
