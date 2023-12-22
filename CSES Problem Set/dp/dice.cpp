#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
signed main(){
    int n;
    cin>>n;
    int dp[n+1];
    dp[0] = 1;
    
    for(int i=1;i<=n;i++){
        int x =0;
        for(int j=1;j<=6 and j<=i;j++){
            x+=dp[i-j];
        }
        dp[i] = x%mod;
    }
    cout<<dp[n];
    return 0;
}