#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x ;
        cin>>x;
        v.push_back(x);
    }
    int sum =0;
    int ans =0;
    map<int, int> mp;
    for(int i=0;i<n;i++){
        // sum += v[i];
        mp[sum]++;
        sum = (sum+n+ v[i]%n)%n;
        ans += mp[sum];
        // int k = sum%n;
        // if(k<0)k+=n;
        // if(mp.find(sum)!=mp.end()){
        //     ans += mp[sum];
        //     // mp[k]++;
        // }
        // else mp[sum]++;
    }
    cout<<ans;
}