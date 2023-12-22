#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std ;
signed main(){

    // vector<int> v(n+1);
    // for(int i=0;i<m;i++){
    //     int k=0, s=0;
    //     int y ;
    //     cin>>y;
    //     v[y]=1;
    //     int prev =0;
    //     for(int j=0;j<=n;j++){
    //         if(v[j]==1 or j==n){
    //             s = j - prev ;
    //             prev = j;
    //         }
    //         // cout<<s<<" ";
    //         k = max(k,s);
    //     }
    //     // k = max(k,n-k) ;  
    //     // cout<<l<<" "<<r<<" ";
    //     cout<<k<<" ";
    // }
    int x,n;
    cin>>x>>n;
    set<int> p{{0,x}};
    multiset<int> w{{x}};
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int m ;
        cin>>m;
        auto z =p.lower_bound(m);
        int l = *prev(z), r = *z;
        p.insert(m);
        w.erase(w.find(r-l));
        w.insert(m-l);
        w.insert(r-m);
        ans[i] = *w.rbegin();
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    return 0;
}