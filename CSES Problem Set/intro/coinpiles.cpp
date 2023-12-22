#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    while(n--){
        long a,b;
        cin>>a>>b;
        // while(a>0 and b>0){
        //     if(a>=b)
        //     {
        //         a-=2;
        //         b-=1;
        //     }
        //     else{
        //         a-=1;
        //         b-=2;
        //     } 
            
        // }
        // if(a==0 and b==0)cout<<"YES";
        // else cout<<"NO";
        // cout<<endl;


        if((a+b)%3 or a>2*b or b>2*a)cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
    return 0;
}