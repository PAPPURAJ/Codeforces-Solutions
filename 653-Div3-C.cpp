C. Move Brackets
Link: https://codeforces.com/contest/1374/problem/C


#include<bits/stdc++.h>
#define ff unsigned int t;cin>>t;for(int z=0;z<t;z++)
#define ll long long int
#define ui unsigned int
#define ull unsigned long long int
 
using namespace std;
void solve();
main(){ff solve();}
 
 
 
 
 
 
void solve(){
    int len,p=0,c=0;
    string s;
    cin>>len;
    cin>>s;
 
    for(int i=0;i<len;i++){
        if(s[i]==')'){
            if(p==0)
                c++;
            else
                p--;
        }
        else
            p++;
 
 
    }
    cout<<c<<endl;
 
 
}
