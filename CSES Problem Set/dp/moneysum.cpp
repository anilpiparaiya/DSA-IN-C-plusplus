#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
int gbc(map<int,int> & can, int n){
    auto it = can.lower_bound(n);
    if(it == can.begin())return 0;
    it--;
    return it->second;
}
void insert(map<int,int> & can, int n, int k){
    if(can[n]>=k)return;
    can[n] = k;
    auto it = can.find(n);it++;
    while(it!=can.end() and it->second<=k){
        auto temp = it;
        it++;
        can.erase(temp);
    }
}
int solve (vector<int> &v,int n ){
    int dp[n];
    map<int, int> can;
    dp[0] = 1;
    can[v[0]] = dp[0]; 
    for(int i=1;i<n;i++){
        dp[i] = 1+ gbc( can, v[i]);
        insert(can, v[i], dp[i]);
    }
    int ans = *max_element(dp, dp+n);
    return ans;
}
signed main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<solve(v, n);


}