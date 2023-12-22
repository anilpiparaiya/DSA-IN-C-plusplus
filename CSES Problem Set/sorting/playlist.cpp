#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n ;
    cin>>n;
    map<int, int> mp;
    int k = 0;
    int ans =0;
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        k = max(k, mp[x]);
        ans = max(ans, i-k);
        mp[x] = i;
    }
    
    cout<<ans;
    return 0;
}
