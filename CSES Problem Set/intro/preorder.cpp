#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    map<char, int> mp;
    for(int i=0;i<str.length();i++)mp[str[i]]++;
    int c=0;
    char k;
    // int in ;
    for(auto i:mp){
        if(i.second%2)
        {
            k = i.first;
            c++;
        }
    }
    // cout<<c;
    string ans = "";
    if(c>1)cout<<"NO SOLUTION";
    else {
         
        for(auto j:mp){
            if(j.second%2==0){
                for(int k=0;k<j.second/2;k++)
                ans += j.first;
            }
        }
        string p = ans;
        reverse(p.begin(), p.end());
        for(int i=0;i<mp[k];i++)ans += k;
        ans += p;
        cout<<ans;
    }
    return 0;
}