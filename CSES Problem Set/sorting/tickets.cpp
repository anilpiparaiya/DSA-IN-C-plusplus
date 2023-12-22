#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    vector<int> b ;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    for(int i=0;i<m;i++){
        int k = lower_bound(v.begin(), v.end(),b[i]) 
            - v.begin();
            // cout<<v[k]<<" "<<b[i]<<" ";
        if(v[k]>b[i]){
        	
            if(k>0)cout<<v[--k]<<endl;
            else cout<<-1<<endl;
        }
        else if(v[k]<b[i])cout<<v[k]<<endl;  
        else cout<<v[k]<<endl;
        v.erase(v.begin()+k);
    }
    return 0;
    
} // namespace std;

