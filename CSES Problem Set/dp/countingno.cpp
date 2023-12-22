#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll l , r ,c=0;
    cin>>l>>r;
    for(ll i = l; i<=r;i++){
        string str = to_string(i);
        int f=0;
        for(int j = 1; j<str.length();j++){
            if(str[j]==str[j-1])f=1;
        }
        if(!f){
            c++;
        }
    }
    cout<<c<<endl;
}