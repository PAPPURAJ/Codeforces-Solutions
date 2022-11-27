#include<bits/stdc++.h>
#define ff unsigned int ttt;cin>>ttt;for(int zzz=0;zzz<ttt;zzz++)
#define ll long long int
#define ui unsigned int
#define ull unsigned long long int
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'
#define Fi(ii,jj) for(int i=ii;i<jj;i++)
#define Fid(ii,jj) for(int i=jj-1;i>=ii;i--)
#define Fj(iii,jjj) for(int j=iii;j<jjj;j++)
#define Fk(iiii,jjjj) for(int k=iiii;k<jjjj;k++)
#define strSort(sss) sort(sss.begin(),sss.end())
#define strSortR(sss) sort(sss.end(),sss.begin())
#define intArSort(arr) sort(arr, arr + sizeof(arr) / sizeof(arr[0]))
#define read freopen ("in.txt","r",stdin)
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define rev(aaa)reverse(aaa.begin(),aaa.end())

using namespace std;
void solve();




int main(){
      // read;
        SPEED  
        ff  
        solve();
        return 0;
    }




void solve(){

 ull n,a,out;
 cin>>n>>out;
 
 Fi(1,n) {
    cin>>a;
    out=__gcd(a,out);
 }
    
 cout<<a/out<<nl;   
    
}
