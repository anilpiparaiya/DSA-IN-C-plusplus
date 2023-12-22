#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<vector<int> > dp(50000, vector<int>(5000,-1));
// int dp[5001][5001];
int solve(int i, int j, string s1, string s2){
     if(i == s1.length() || j == s2.length())return max((int)s2.length() - j, (int)s1.length() - i);
    if(dp[i][j] != -1)return dp[i][j];
    int ans;
    if(s1[i]==s2[j]){
        ans = solve(i+1, j+1, s1,s2);
    }
    else{
    int op1 = 1+ solve(i+1, j, s1,s2);

    int op2 = 1+ solve(i, j+1, s1,s2);

    int op3 = 1+ solve(i+1, j+1, s1,s2);
    ans= min (op1, min(op2, op3));
    }
    return dp[i][j] = ans;
}


signed main(){
    fast_io;
    string s1,s2;
    // memset(dp, -1,sizeof dp);
    cin>>s1>>s2;
    cout<<solve(0,0,s1,s2);
    return 0;
}