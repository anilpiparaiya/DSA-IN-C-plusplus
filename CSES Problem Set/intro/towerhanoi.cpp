#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int p=0;
vector<pair<int,int> > pwh;
void twh(int n, int f, int t, int h)
{
    if(n==1){
        pwh.push_back(make_pair(f,t));
        // p++;
        return;
    }
    
    twh(n-1,f,h,t);
    pwh.push_back(make_pair(f,t));
    twh(n-1,h,t,f);
}
int main(){
    int n;
    cin>> n;
    twh(n,1,3,2);
    cout<<pwh.size()<<endl;
    for(int i=0;i<pwh.size();i++){
        cout<<pwh[i].first<<" "<<pwh[i].second<<endl;
    }
    return 0;
}