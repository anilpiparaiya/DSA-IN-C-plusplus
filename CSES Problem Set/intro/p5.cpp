#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    if(n==2 or n==3)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    for(int i=2;i<=n;i+=2)cout<<i<<" ";
    for(int i=1;i<=n;i+=2)cout<<i<<" ";
    return 0;
}