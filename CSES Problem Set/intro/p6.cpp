#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x,y;
        cin>>x>>y;
        long long int d = max(x,y);
        if(d%2){
            if(d==y)cout<<d*d-x+1;
            else cout<<(d-1)*(d-1)+y;
        }
        else{
            if(d==x)cout<<d*d-y+1;
            else cout<<(d-1)*(d-1)+x;
        }
        cout<<endl;
    }
    return 0;
}