#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
signed main(){
    int n;
    cin>>n;
    int dp[n+1][n*n];
    dp[0][0] = 1;
    for(int i=1;i<(n*n)/2;i++)dp[0][i] = 0;
    for(int i=1;i<=n;i++){
        for(int x = 0;x <= (n*(n+1))/4;x++){
            if(x>=i)
            {
                dp[i][x] = (dp[i-1][x-i] + dp[i-1][x])%mod;
            }
            else 
            dp[i][x] = (dp[i-1][x])%mod;
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int x =0;x<=(n*(n+1))/4 ;x++)cout<<dp[i][x]<<" ";
    //     cout<<endl;
    // }
    if((n*(n+1))%4 !=0)cout<<0;
    else cout<<(dp[n][(n*(n+1))/4]*500000004)%mod;
    return 0;
}