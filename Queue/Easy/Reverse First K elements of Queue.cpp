// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int>st;
        for(int i=0; i<k; i++){
            st.push(q.front());
            q.pop();
        }
        
        queue<int>res;
        while(!st.empty()){
            res.push(st.top());
            st.pop();
        }
        
        while(!q.empty()){
            res.push(q.front());
            q.pop();
        }
        
        return res;
    }
};
