#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define sz size
#define pb push_back

signed main(){
    int n;
    cin>>n;
    // vector<int> v;
    // for(int i=0;i<n;i++)
    // {
    //     int x; cin>>x;
    //     v.push_back(x);
    // } 
    // int k =0;
    // for(int j=0;j<v.size();j++){
    //     int prev = v[j];
    //     for(int i=j+1;i<v.size();i++){
    //         if(prev > v[i]){
    //             prev = v[i]; 
    //             v.erase(v.begin() + i);  
    //         }
    //     }
    //     k++;
    //     // v.erase(v.begin()+j);
        
    // }
    // cout<<k;


    vector<int> v;
    for(int i=0;i<n;i++){
        int z;cin>>z;
        int lo = 0, hi = v.size();
        
        while(lo<hi){
            cout<<lo<<" "<<hi<<" ";
            int mid = (lo + hi)/2;
            if(v[mid]>z) hi = mid;
            else  lo = mid+1;
            cout<<mid<<" "<<v[mid]<<" ";
            cout<<lo<<" "<<hi<<" "<<endl;
        }
        if(lo == v.size())v.push_back(z);
        else v[lo] = z;
    }
    cout<<v.size();
    return 0;
}