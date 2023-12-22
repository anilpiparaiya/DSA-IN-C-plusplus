#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int n, m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x ;
        cin>>x;
        v.push_back(x);
    }
    for (int i = 0; i < n-m+1; i++)
    {
        vector<int>t;
        t.assign(v.begin()+i, v.begin()+i+m);
        sort(t.begin(), t.end());
        int ans =0;
        if(m%2)cout<<t[m/2];
        else cout<<(t[m/2 -1 ]);
        cout<<" ";
    }
    return 0;
}
    
