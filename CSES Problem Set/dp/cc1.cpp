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
    int dp[m+1];
    dp[0] = 1;
    for(int i=1;i<=m;i++){
        int x =0;
        for(int j =0;j<n;j++){
            if(i>=vec[j])x+= dp[i -vec[j]];
        }
        dp[i] = x%mod;
    }
    cout<<dp[m];
    return 0;
}