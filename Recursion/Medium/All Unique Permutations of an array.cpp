//User function Template for C++

class Solution {
    public:
    void help(set<vector<int>>& st,vector<int>& arr,int& n,int curr){
        //base case
        if(curr==n){
            st.insert(arr);
            return ;
        }
        
        //recursive calls
        //small calculation
        for(int i=curr;i<n;i++){
            swap(arr[curr],arr[i]);     
            help(st,arr,n,curr+1);  
            swap(arr[curr],arr[i]); 
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        
        set<vector<int>> st;
        vector<int> v;
        help(st,arr,n,0);
        
        
        vector<vector<int>> ans;
        
        for(auto it:st)
        ans.push_back(it);
        
        return ans;
    }
};
