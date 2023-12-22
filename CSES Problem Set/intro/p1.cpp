#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int  n;
    cin>>n;
    cout<<n<<" ";
    // int k = 
    while(n!=1){
        if(n&1)n = n*3+1;
        else n/=2;
        cout<<n<<" ";
    }
    return 0;
}