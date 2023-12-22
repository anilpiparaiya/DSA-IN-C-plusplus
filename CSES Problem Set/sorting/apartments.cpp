#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    int n, m,k;
    cin>>n;
    cin>>m;
    cin>>k;
    vector<int> v;
    // cout<<0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
     //cout<<0;
    vector<int> vec;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    // cout<<0;
    int ans =0;
    sort(vec.begin(), vec.end());
    
    for (int i = 0, j=0; i < n and j<m; ) {
        if (abs(v[i] - vec[j])<=k)
        {
            ans++;i++; j++;
        }
        else if(abs(v[i] - k)>vec[j])j++;
        else i++;
    }
    // ans = min(ans, m);
    cout<<ans;
    return 0;
} // namespace std;

