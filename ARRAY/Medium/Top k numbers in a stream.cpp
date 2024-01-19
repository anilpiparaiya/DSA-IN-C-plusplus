
class Solution {
  public:
    vector<vector<int>> kTop(vector<int>& arr, int N, int K) {
        unordered_map<int, int> freq;
        set<pair<int, int>> v; // {freq, number}
        vector<vector<int>> ans;
        
        for(int i = 0; i < N; ++i) {
            vector<int> res;
            // Storing it in Negative to Get it in Decreasing Order
            if(freq[arr[i]] > 0) {
                v.erase({-freq[arr[i]], arr[i]});
            }
            
            freq[arr[i]]++;
            
            v.insert({-freq[arr[i]], arr[i]});
            
            int t = K;
            for(auto j : v) {
                if(t == 0)  break;
                res.push_back(j.second);
                --t;
            }
            ans.push_back(res);
        }
        return ans;
    }
};
