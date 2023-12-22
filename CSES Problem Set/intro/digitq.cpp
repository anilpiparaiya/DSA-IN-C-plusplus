#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define int long long
int xpow(int x, int y){
    int res =1;
    while(y>0)
    {
        if(y&1)res = res*x;
        y>>=1;
        x = x*x;
    }
    return res;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int c = 1;
        for (int p = 9;; n -= p, c++, p = 9*xpow(10, c-1)*c) {
            // cout<<n<<" "<<p<<"--";
            if (n - p <= 0) break;
        }
        n--;
        // cout<<n;
        int x = n/c;
        int y = n%c;
        int ans = xpow(10, c-1) + x;
        // cerr<<ans<<' '<<x<<' '<<y<<' '<<n<<' '<<c;
        string s = to_string(ans);
        // cout<<s;
        cout<<s[y]<<endl;// else
    }



        // while(t--){
        //     int n;
        //     cin>>n;
        //     int c =1;
        //     for(int  p=9;;n-=p, c++,p= 9*pow(10, c-1)*c){
        //         if(n-p <= 0 )break;
        //     }
        //     n--;
        //     int x = n/c;
        //     int y = n%c;
        //     int ans = pow(10,c-1) + x;
        //     string s = to_string(ans);
        //     cout<<s[y]<<endl;
        // }
    
}