#include<iostream>
using namespace std;

// int bin_to_dec(int arr[], int len){
//     int n =0;
//     for(int i=len-1;i>=0;i--){
//         n+= pow(arr[i], len-i-1);
//     }
//     return n;
// }
int reverse(int num){
    int num ;
    // cin>>num
    int x =0;
    while(num>0){
        x += num%10;
        num/=10;
        x*=10;
    }
    return x/10;
}
int main(){
    int len;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    int ar[len];
    int c =0;
    for(int i=0;i<len;i++){
        if(isPrime(i))ar[c++] = arr[i];
    }
    int x = bin_to_dec(ar,c);
    int y = reverse(x);
    cout<<(x==y);
    cout<<y;
}