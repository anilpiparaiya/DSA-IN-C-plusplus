
#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int n;
    cin>>n;
    vector<int >v;
    int sum =0,mx =0;
    for(int i=0;i<n;i++){
        int x ;
        cin>>x;
        v.push_back(x);
        sum+= x;
        mx = max(mx, x);
    }
    cout<<max(mx*2, sum);
    return 0;
}