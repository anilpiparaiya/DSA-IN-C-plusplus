



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
signed main(){
    int n,m;
    cin>>n>>m;
    vector<int> vec(n);
    for(int i=1;i<=n;i++)cin>>vec[i];
    vector<vector<int> > dp(n+2, vector<int>(m+2, 0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1){
                if(vec[i]==0 or vec[i]==j)dp[i][j] = 1;
                else dp[i][j] = 0;
            }
            else {
                if(vec[i]==0 or vec[i]==j)dp[i][j] = (dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1])%mod;
                else dp[i][j] =0;
            }
        }
    }

    int ans =0;
    for(int i=1;i<=m;i++){
        ans = (ans + dp[n][i])%mod;
    }
    cout<<ans;
    return 0;
 }