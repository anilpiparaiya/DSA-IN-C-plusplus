#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    lli t;
    cin>>t;
    map<int, int> mp;
    
    while(t--){
        lli a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b]--;    
    }
    int ans=0, cur =0;
    for(auto i:mp){
        cur+= i.second;
        ans = max(ans, cur);
    }
    cout<<ans;
    return 0;
}