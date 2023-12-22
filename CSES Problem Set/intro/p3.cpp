#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<int>mp(256,-1);
    string str;
    cin>>str;
    int st =1;
    int ans =1;
    for(int i=1;i!=str.size();i++){
        if(str[i]!=str[i-1])st=1;
        else st++;
        ans = max(ans,st);
    }
    cout<<ans;
    return 0;
}


    // takeaway: purane wala save kro pehle agar already aa chuka h and then st me save krke naya wala mp[s[i]] me sabe kro and ans ko max of ans and i- st se update krte jao