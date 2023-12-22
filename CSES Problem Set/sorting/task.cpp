#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int n;
    cin>>n;
    vector<pair<int, int > >v;
    for(int i=0;i<n;i++){
        int x ;
        cin>>x;
        int y;
        cin>>y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    int ans =0;
    int k =0;
    for(int i=0;i<n;i++){
        k += v[i].first;
        ans += v[i].second - k;
    }
    cout<<ans;
    return 0;
}