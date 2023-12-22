#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int n,m;
    cin>>n>>m;
    map<int, int> v;
    int s =0, ans =0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[s]++;
        s += x;
        ans += v[s-m];
    }
    cout<<ans<<" ";

}