#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

int solve(int a, int b)
{
    int dp[a+1][b+1];
    
    for(int h=1;h<=a;h++){
        for(int w=1;w<=b;w++){
            if(h==w)dp[h][w] =0;
            else{
                int ans= 1e8;
                for(int i=1;i<w;i++){
                    ans = min(1 + dp[h][w-i] +dp[h][i] ,ans);
                }
                for(int i=1;i<h;i++){
                    ans = min(1 + dp[i][w] +dp[h-i][w] ,ans);
                }
                dp[h][w] = ans;
            }
        }
    }

    // for(int i=1;i<=h;i++){
    //     for(int j=1;j<=w;j++)cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }
    return dp[a][b];
}
signed main(){
    int n,m;
    cin>>n>>m;
    cout<<solve(n,m);
    return 0;
}