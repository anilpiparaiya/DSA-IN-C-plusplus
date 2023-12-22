#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll dp[5000][5000],v[5000];
// vector<int> v;
ll func(ll i, ll j){
    if(i>j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
   ll vv1 = v[i] + min(func(i+2,j),func(i+1,j-1));
    ll vv2 = v[j] = min(func(i+1,j-1),func(i,j-2));
    // dp[i][j] = max(vv1,vv2);
    return dp[i][j]= max(vv1,vv2);

    // ll op1 = v[i] + min(func(i+2,j), func(i+1,j-1) );
    // ll op2 = v[j] + min(func(i+1,j-1), func(i,j-2) );

    // return dp[i][j] = max(op1,op2);
}
int main(){
    ll n;
    cin>>n;
    // vector<int> v;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<func(0,n-1);
    return 0;
}

