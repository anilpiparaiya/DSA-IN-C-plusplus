#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int n,t;
    cin>>n>>t;
    vector<int >v;
    for(int i=0;i<n;i++){
        int x ;
        cin>>x;
        v.push_back(x);
    }
    int s =0;
    sort(v.begin(), v.end());
    int l =1, r = v[0]*t;
    while(l<r){
        int m = (l+r)/2;
        s=0;
        for(int i=0;i<n;i++){
            s+= m/v[i];
        }
        cout<<s<<" ";
        if(s<t)l = m+1;
        else r = m;
    }
    cout<<l;
    return 0;
}
