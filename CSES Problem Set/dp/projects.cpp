#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct job{
    ll st, fi, money;
};
bool comp (struct job j1, struct job j2){
    return (j1.fi < j2.fi);
}
ll find (struct job a[], ll i ){
    for(int j = i-1;j>=0;j--){
        if(a[j].fi < a[i].st)return j;
        
    }
    return -1;
}
int main(){
    ll n;
    cin>>n;
    struct job a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].st>>a[i].fi>>a[i].money;
    }
    sort(a, a+n, comp);
    vector<ll> dp(n,0);
    dp[0] = a[0].money;
    for(int i=1;i<n;i++){
        ll temp = a[i].money;
        ll search = find(a,i);
        if(search != -1)temp += dp[search]; 
        dp[i] = max(temp, dp[i-1]);
    }
    cout<<dp[n-1]<<endl;
    return 0;
}