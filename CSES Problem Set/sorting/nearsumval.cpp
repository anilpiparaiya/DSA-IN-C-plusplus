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
        
        v.push_back(make_pair(x, i+1));
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        int f=0;
        for(int j=i;j>=0;j--){
            if(v[j].first<v[i].first){
                ans.push_back(v[j].second);
                f=1;
                break;
            }            // else ans.push_back(0);
        }
        if(!f)ans.push_back(0);
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    return 0;
}