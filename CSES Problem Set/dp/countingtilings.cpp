#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
void generatemask(int cm, int i, int nm, int n, vector<int> &nmasks){
    if(i==n+1){
        nmasks.push_back(nm);
        return;
    }
    
    if((cm & (1<<i))!=0)generatemask(cm, i+1, nm,  n, nmasks);

    if(i != n)
    if(!(cm & (1<<i)) and !(cm & (1<<(i+1))))generatemask(cm, i+2, nm,  n, nmasks);
    if((cm & (1<<i))==0)generatemask(cm, i+1, nm + (1<<i),  n, nmasks);
}
int dp[1001][1<<11];

ll solve(int col, int mask, int m , int n){
    if(col==m+1){
        if(mask ==0)return 1;
        return 0;
    }
    if(dp[col][mask]!=-1)return dp[col][mask];
    int ans = 0;
    vector<int> nmasks;
    generatemask(mask, 1,0, n, nmasks);
    for(int i=0;i<nmasks.size();i++){
        ans = (ans + solve(col+1, nmasks[i],m,n))%mod;
    }
    return dp[col][mask] = ans;
}
int main(){
    ll n,m;
    cin>>n>>m;
    memset(dp, -1, sizeof dp);
    cout<<solve(1,0, m,n);
    
    return 0;
}