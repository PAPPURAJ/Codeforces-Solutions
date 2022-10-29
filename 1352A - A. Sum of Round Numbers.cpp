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
#define intArSort(arr) sort(arr, arr + sizeof(arr) / sizeof(arr[0]))
#define read freopen ("in.txt","r",stdin)
#define py cout<<"YES\n"
#define pn cout<<"NO\n"

using namespace std;
void solve();


main(){
       //read;
        SPEED  ff  solve();
    }




void solve(){

    ull a,p=0,t;
    cin>>a;


    for(int i=0,t=a;t;i++){
        if(t%10)
            p++;
         t/=10;
    }
    cout<<p<<nl;


    for(int i=0;a;i++){
        if(a%10)
            cout<<(a%10)*pow(10,i)<<" ";
         a/=10;
    }
    cout<<nl;
    }

 
