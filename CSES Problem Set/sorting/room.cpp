#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int n;
    cin>>n;
    vector<pair<int, int > >v;
    for(int i=1;i<=n;i++){
        int x ;
        cin>>x;
        int y;
        cin>>y;
        v.push_back(make_pair(x, i));
        v.push_back(make_pair(y+1, -i));
    }
    sort(v.begin(), v.end());
    int ans =0;
    vector<int> r(n+1), f;
    for(auto i:v){
        if(i.second > 0){
            if(f.size()>0)
            r[i.second] = f.back(), f.pop_back();
            else{
                r[i.second] = ++ans;
            }
        }
        else{
            f.push_back(r[-(i.second)]);
        }
    }
    cout<<ans<<endl;
    for(int i=1;i<r.size()+1;i++){
        cout<<r[i]<<" ";
    }
    return 0;
}