#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
signed main(){
    int n;
    cin>>n;
    int k = n;
    int c=0;
    while(k){
        string str = to_string(k);
        int t = str[0] - '0';
        for(int i=1;i<str.length();i++){
            t = (t>(str[i]-'0'))?t:(str[i]-'0');
        }
        k-=t;
        c++;
    }
    cout<<c;
}
