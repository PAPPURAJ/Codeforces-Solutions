Link: https://codeforces.com/contest/1623/problem/A

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

    int r,c,rx=6,ry=9, dx,dy,i=0;
    bool inX=true,inY=true;
    cin>>r>>c>>rx>>ry>>dx>>dy;

    while(1){
            if(rx==dx || ry==dy){
            cout<<i<<nl;
            return;
            }

                if(inX){
            if(rx>r-1){
                rx--;
                inX=false;
            }else{
                rx++;
            }

        }else{
             if(rx<2){
                rx++;
                inX=true;
            }else{
                rx--;;
            }
        }
        if(inY){
            if(ry>c-1){
                ry--;
                inY=false;
            }else{
                ry++;
            }

        }else{
             if(ry<2){
                ry++;
                inY=true;
            }else{
                ry--;;
            }
        }



        i++;

    }


  }
