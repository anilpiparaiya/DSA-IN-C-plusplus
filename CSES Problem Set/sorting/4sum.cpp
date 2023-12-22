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
    sort(v.begin(),v.end());
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            int l = j+1;
            int r = n-1;
            while(l<r){
                if((v[i].first + v[j].first + v[l].first + v[r].first)<m)l++;
                else if((v[i].first + v[j].first + v[l].first + v[r].first)>m)r--;
                else{
                     cout<<v[i].second+1<<" "<<v[j].second+1<<" "<<v[l].second+1<<" "<<v[r].second+1;
                return 0;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
