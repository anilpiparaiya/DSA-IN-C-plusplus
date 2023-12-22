#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long  p=1e9+7;
    long long x=1;
    while(n--){
        x = x*2%p;
    }
    cout<<x;
    return 0;

}