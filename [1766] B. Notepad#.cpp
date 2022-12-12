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
#define read freopen ("in.txt","r",stdin)

using namespace std;
void solve();


main(){
        //read;
        SPEED  ff solve();
    }





void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    Fi(0,n-3){

       Fj(i+2,n-1)
            if(s[i]==s[j] && s[i+1]==s[j+1])
                {
                    cout<<"YES\n";
                    return;

                }
    }cout<<"NO\n";

  }


