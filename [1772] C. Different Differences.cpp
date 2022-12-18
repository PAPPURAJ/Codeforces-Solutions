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
#define TEST freopen ("in.txt","r",stdin);freopen ("out.txt","w",stdout);
#define py cout<<"YES\n"
#define pn cout<<"NO\n"

using namespace std;
void solve();
 

int main(){
        
     //  TEST
        SPEED  ff solve();
      
        return 0;
    }





void solve(){

    int n,k;
    cin>>n>>k;
    int t=1;
    cout<<"1 ";
    Fi(1,n-1){ 
    if(t+i+(n-i+1)>k)
        t++;
    else      
        t+=i;
   
            cout<<t<<" ";

    
    }
    cout<<k<<nl;   

  }

