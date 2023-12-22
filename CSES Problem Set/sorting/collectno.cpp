#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std ;
signed main(){
    int n;
    cin>>n;
    vector<int> x(n+1);
    for(int i=1;i<=n;i++){
        int y ;
        cin>>y;
        x[y] = i;
    }
    int ans =1;
    int l = 1;
    for(int i=1;i<=n;i++){
        if(l> x[i])ans++;
        l = x[i];
        // cout<<l<<" ";
    }
    cout<<ans;
}