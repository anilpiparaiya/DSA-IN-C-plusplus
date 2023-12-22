#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int n;
    cin>>n;
    vector<int> v;
    int sum =0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        sum += x; 
    }
    int f =0;
    int dp[n+1][sum+1];
    for(int j=0;j<=sum;j++){
        for(int i=0;i<=n;i++){
            if(i==0 and j==0)dp[i][j] = 1;
            else if(j==0)dp[i][j] = 1;
            else if(i==0)dp[i][j] = 0;
            else {
                dp[i][j] = dp[i-1][j];
                if(j>=v[i-1])dp[i][j] = dp[i-1][j] or dp[i-1][j-v[i-1]];
            }
        }
        if(dp[n][j]==0){
            f = 1;
            cout<<j;
            break;
        }
    }
    
    for(int i=0;i<=sum;i++){
        if(!dp[n][i] and !f){
            cout<<i;
            f = 1;
            break;
            
        }
    }
    if(!f)cout<<sum+1;
    return 0;

}