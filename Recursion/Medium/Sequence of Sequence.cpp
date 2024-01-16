// User function Template for C++

class Solution{
public:
    int numberSequence(int m, int n){
        // code here
        if(n == 1)  return m;
        if(m < 1)   return 0;
        int ans = 0, res = 1, minM = pow(2, n-1);
        while(res && (m >= minM)){
            res = numberSequence(m/2, n-1);
            --m;
            ans += res;
        }
        return ans;
    }
};
