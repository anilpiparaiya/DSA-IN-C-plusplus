
class Solution
{
    public:
    vector<int> search(string pat, string txt)
    {
        vector<int> ans;
        int n=txt.size();
        int m=pat.size();
        for(int i=0;i<(n-m+1);i++)
        {
            bool flag=1;
            int k=0;
            for(int j=i;j<(i+m);j++)
            {
                if(txt[j]==pat[k])
                k++;
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
            ans.push_back(i+1);
        }
        return ans;
    }
     
};
