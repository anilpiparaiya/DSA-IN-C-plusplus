#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool cmp(pair<int, int> & a, pair<int, int> &b){
    return a.second<b.second;
}
int main(){
    lli t;
    cin>>t;
    vector<pair<int, int>> mp;
    
    while(t--){
        lli a,b;
        cin>>a>>b;
        mp.push_back(make_pair(a,b));
        // mp[a]++;
        // mp[b]--;    
    }
    sort(mp.begin(), mp.end(), cmp);
    int ans=0, cur =0;
    for(auto i:mp){
        if(i.first>=cur)ans++, cur = i.second;
        // cur += i.second;
        // ans = max(ans, cur);
    }
    cout<<ans;
    return 0;
}