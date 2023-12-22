#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std ;
signed main(){
    int n,m;
    cin>>n>>m;
    vector<int> x(n+1);
    for(int i=1;i<=n;i++){
        int y ;
        cin>>y;
        x[y] = i;
    }
    for(int i=1;i<=m;i++){
        int ans =1;
        int l = 1;
        int a, b;
        cin>>a>>b;
        for(int i=1;i<=n;i++){
            if(i==a)x[i] = b;
            if(i==b)x[i] = a;
        }
        for(int i=1;i<=n;i++)cout<<x[i]<<" ";
        cout<<endl;
        for(int i=1;i<=n;i++){
            if(l>x[i])ans++;
            l = x[i];
            // cout<<l<<" ";
        }
        cout<<ans<<endl;
    }
    
    
}