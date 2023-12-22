#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    vector<int> v;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
        mx = max(mx,x);
    }
    if(mx<0){
        cout<<mx;
        return 0;
    }
    int ans=0;

    int maxa=0;
    for(int i=0;i<n;i++){
        ans+= v[i];
        maxa = max(ans, maxa);
        if(ans<0)ans =0;
    }
    cout<<maxa;
    return 0;
}