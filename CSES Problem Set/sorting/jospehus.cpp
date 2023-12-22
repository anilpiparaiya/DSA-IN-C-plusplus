#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
    int n;
    cin>>n;
    int res = 0;
    for (int i = 1; i <= n; ++i)
    {
      res = (res + 2) % i;
        cout<<res + 1;
    }
    return 0;
}