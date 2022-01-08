URL: https://codeforces.com/contest/1621/problem/A

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
        SPEED  ff solve();
    }






void solve(){
    int a,b,p=0;
    cin>>a>>b;

    if((a/2+1<b && a%2==1) || (a/2<b && a%2==0) ){
        cout<<"-1"<<nl;
        return;
    }

    Fi(0,a){
        Fj(0,a){
            if(i==j && i%2==0 && p<b){
               cout<<"R";
               p++;
            }

            else
                cout<<".";

        }cout<<nl;
    }




  }
