/*
	This problem is similar to maximum sum in array without adjacent, a simple DP solution can solve it in one line.
*/

#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int a[n], dp[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    // Here dp[i] is the maximum amount that has been collected till ith house
	    dp[0]=a[0];
	    dp[1]=max(a[0], a[1]);
	    //Now for each element we have two options, either include it or not
	    for(i=2;i<n;i++)
	    {
	        // if include it then
	        int t1=a[i]+dp[i-2];
	        // if does not include it
	        int t2=dp[i-1];
	        dp[i]=max(t1,t2);
	    }
	    cout<<dp[n-1]<<"\n";
	}
	return 0;
}

/* 
	O(1) Space 
	Similar to fibonacci sequence
*/
int rob(vector<int>& nums) 
{
	int ans = 0, n = nums.size();
	if(n == 0)
		return 0;
	else if(n < 2)
		return nums[0];
	
	int prev = nums[0], curr = max(nums[0], nums[1]);
	
	for(int i=2; i<n; i++)
	{
		int temp = curr;
		curr = max(prev+nums[i], curr);
		
		prev = temp;
	}
	
	return curr;
}