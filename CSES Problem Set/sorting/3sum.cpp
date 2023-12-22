#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int, int > >v;
    for(int i=0;i<n;i++){
        int x ;
        cin>>x;
        
        v.push_back(make_pair(x, i));
    }
    vector<int> ans;
    int p=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        // int x = v[i].first;
        int l = 0;
        int r = n-1;
        
        while(l<i and i<r){
            if((v[i].first+v[l].first+v[r].first)<m)l++;
            else if((v[i].first+v[l].first+v[r].first)>m)r--;
            else{

                cout<<v[i].second+1<<" "<<v[l].second+1<<" "<<v[r].second+1;
                return 0;
                ans.push_back(v[i].second);
                ans.push_back(v[l].second);
                ans.push_back(v[r].second);
                // cout<<mp[x]<<" "<<mp[v[l]]<<" "<<mp[v[r]];
                l++;
                r--;
            }
        }
    }
    cout<<"IMPOSSIBLE";
    // else{
    // sort(ans.begin(), ans.end());
    // for(int i=0;i<3; i++)cout<<ans[i]+1<<" ";
    // }
    return 0;
}