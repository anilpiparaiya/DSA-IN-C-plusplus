#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
signed main(){
    int n;
    cin>>n;
    char path[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>path[i][j];
        }
    }
    if(path[n-1][n-1]=='*')cout<<"0";
    else{
    int dp[n][n];
    dp[n-1][n-1] = 1;
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(i==n-1 and j==n-1)dp[n-1][n-1] = 1;
            else if(i==n-1){
                if(path[i][j]=='*')dp[i][j] = 0;
                else dp[i][j] = dp[i][j+1];
            }
            else if(j==n-1){
                if(path[i][j]=='*')dp[i][j] = 0;
                else dp[i][j] = dp[i+1][j];
            }
            else{
                if(path[i][j]=='*')dp[i][j] = 0;
                else 
                dp[i][j] = dp[i+1][j]+dp[i][j+1];
            }
        }
    }
    // for(int i=0;i<=n-1;i++){
    //     for(int j=0;j<=n-1;j++)cout<<dp[i][j]<<" ";cout<<endl;
    // }
    cout<<dp[0][0];
    }
    return 0;
}