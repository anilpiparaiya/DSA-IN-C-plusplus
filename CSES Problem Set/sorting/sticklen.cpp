#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int ans =0;
    for(int i=0;i<v.size();i++){
        ans += abs(v[i]- v[n/2]);
    }
    cout<<ans;
    return 0;
}