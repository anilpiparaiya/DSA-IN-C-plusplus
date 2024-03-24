//User function Template for C++

class Solution{
public:
    void insert(stack<int> &st, int x)
    {
        if(st.empty())
        {
            st.push(x);
            return;
        }
        
        int a = st.top();
        st.pop();
        insert(st, x);
        st.push(a);
        
    }

    stack<int> insertAtBottom(stack<int> st,int x){
        
        insert(st, x);
        return st;
    }
};
