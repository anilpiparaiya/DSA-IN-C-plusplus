#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> vec;
void solve(int n,string c){
    if(n==0){
        vec.push_back(c);
        return;
    }
    for(int i=0;i<n;i++){
        swap(c[i],c[n-1]);
        solve(n-1, c);
        swap(c[i],c[n-1]);
    }

}
int main(){
    string str;
    cin>>str;
    solve(str.length(), str);
    sort(vec.begin(), vec.end());
    set<string> st;
    for(int i=0;i<vec.size();i++){
        st.insert(vec[i]);
    }
    int p = st.size();
    cout<<p<<endl;
    for(auto i:st){
        cout<<i<<endl;
    }
    return 0;

}