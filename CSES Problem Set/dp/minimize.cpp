#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
signed main(){
    int n,m;
    cin>>n>>m;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    vector<int> dp(m+1, INT_MAX);
    dp[0] = 0;
    for(int j=0;j<n;j++){
        for(int i = vec[j];i<=m;i++){
            dp[i]= min(dp[i] ,dp[i -vec[j]]+1);
            // cout<<dp[i]<<" ";
        }
        // dp[i] = x%mod;
        
    }
    if(dp[m]==INT_MAX)cout<<-1;
    else cout<<dp[m];
    return 0;
}