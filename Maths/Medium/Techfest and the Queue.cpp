
class Solution {
    public:
    int help(int a)
    {
        int cnt=0;
        for(int i=2;i*i<=a;i++)
        {
            while(a%i==0)
            {
                cnt++;
                a/=i;
            }
        }
        
        if(a>1)
        cnt++;
        
        return cnt;
    }
	int sumOfPowers(int a, int b){
	    int ans=0;
	    for(int i=a;i<=b;i++)
	    {
	        int cnt=help(i);
	        ans+=cnt;
	    }
	    
	    return ans;
	}
};
