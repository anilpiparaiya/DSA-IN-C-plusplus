#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n;
    cin>>n;
    // cout<<0<<endl;
    for(long long  i=1;i<=n;i++){
        long long tot= ((i*i)*((i*i)-1LL))/2;
        long long tt = 4LL*(i-1)*(i-2);
        cout<<tot-tt<<endl;
    }
    return 0;
}