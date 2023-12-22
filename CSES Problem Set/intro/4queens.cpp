#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> vec;
char col[8], d1[15], d2[15];
int ct ;
void solve(vector<string> vec, int i){
    if(i==8){
        ct++;
        return;
    }
    for(int j=0;j<8;j++){
        if(!col[j] and vec[i][j]=='.' and !d1[i+j] and !d2[i-j+7]){
            col[j] = vec[i][j] = d1[i+j] = d2[i-j+7]=1;
            solve(vec, i+1);
            col[j] = vec[i][j] = d1[i+j] = d2[i-j+7]=0;

        }
    }
}
int main(){
    vector<string> vec;
    for(int i=0;i<8;i++){
            string x;
            cin>>x;
            vec.push_back(x);
    }
    solve(vec,0);
    cout<<ct;

}