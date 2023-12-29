//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    unordered_set<char> s;
	    string ans;
	    
	    for(int i=0; i<str.size(); i++){
	        if(s.find(str[i]) == s.end()){
	            s.insert(str[i]);
	            ans += str[i];
	        }
	    }
	    
	    return ans;
	}
};
