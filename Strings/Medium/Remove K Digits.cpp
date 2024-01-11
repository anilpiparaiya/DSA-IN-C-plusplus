// User function Template for C++

class Solution {
  public:
    string removeKdigits(string num, int k) {
        string ans="";
        
        for(char &ch:num){
            while(ans.size() and ans.back()>ch and k){
                ans.pop_back();
                k--;
            }
            if(ans.size() or ch!='0')
                ans.push_back(ch);
        }
        
        while(ans.size()  and k--)
            ans.pop_back();
        
        if(ans=="")
            return "0";
        
        return ans;
    }
};
