#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n, x;
    cin>>n>>x;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int ans = n;
    for (int i = 0, j = n - 1; i < j; i++) {
        while (j > i && v[i] + v[j] > x)
            j--;
        if (i < j)
            j--, ans--;
    }

    cout<<ans;
    return 0;
}

