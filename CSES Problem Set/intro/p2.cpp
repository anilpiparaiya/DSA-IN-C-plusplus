#include<bits/stdc++.h>

using namespace std;
int main(){
    long long int n;
    cin>>n;
    int k = 1;
    for(int i=2;i<=n;i++){
        k^=i;
    }
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        k^=x;
    }
    cout<<k;
}