#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<string> ar;
    ar.push_back("0");
    ar.push_back("1");
    for(int i=2;i<(1<<n);i<<=1){
        // int r = i^(i>>1);
        // bitset<32> k(r);
        //  string s = k.to_string();
        // cout << s.substr(32 - n) << " ";

        for(int j=i-1;j>=0;j--){
            ar.push_back(ar[j]);
        }
        for(int j =0;j<i;j++){
            ar[j] = "0"+ ar[j];
        }
        for(int j = i;j<2*i;j++)ar[j] = "1" + ar[j];
        
    }
    for(int i=0;i<ar.size();i++)cout<<ar[i]<<endl;
    return 0;
}