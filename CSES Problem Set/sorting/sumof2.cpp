#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    int sum ;
    cin>>sum;
    vector<int> vec;
    map<int , int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>> x;
        vec.push_back(x);
        mp[x] = i;
    }
    // for(int i=0;i<n;i++)cout<<vec[i];
    int f =1;
    for(int i=0;i<n;i++){
        if(mp.count(sum-vec[i])!=0 and mp[sum-vec[i]]!=i){
            cout<<i+1<<" "<<mp[sum-vec[i]]+1;
            f = 0;
            break;
        }
    }
    if(f)cout<<"IMPOSSIBLE";
}