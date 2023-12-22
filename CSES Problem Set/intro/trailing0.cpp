#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int x = 5;
    while(n >= x){
        count += n/x;
        x*=5;
    }
    cout<<count;
    return 0;
}