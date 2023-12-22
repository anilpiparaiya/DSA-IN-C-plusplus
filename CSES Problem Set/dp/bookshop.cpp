#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
signed main(){
    int n,m;
    cin>>n>>m;
    vector<int> pg(n);
    vector<int> pr(n);
    for(int i=0;i<n;i++)cin>>pr[i];
    for(int i=0;i<n;i++)cin>>pg[i];
    // vector<vector<int> > dp(n, vector<int>(m,0));
    // vector<vector<int> > dp( n , vector<int> (m, 0));
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 or j==0)dp[i][j] = 0;
            else if(j>= pr[i-1]){
                if(dp[i-1][j- pr[i-1]] + pg[i-1] > dp[i-1][j])dp[i][j]  = dp[i-1][j-pr[i-1]] + pg[i-1];
                else dp[i][j] = dp[i-1][j];
            }
            else dp[i][j] = dp[i-1][j];
        }
        
    }
    cout<<dp[n][m];
        return 0;

}