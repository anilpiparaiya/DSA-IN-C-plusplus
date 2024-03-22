class Solution {
  public:
    vector<int> diagonalSum(Node* root) {
        // Add your code here
        queue<Node*>q;
        vector<int>ans;
        q.push(root);
        while(!q.empty())
        { 
        
            int n=q.size();
            int sum=0;
            for(int i=0;i<n;i++)
            { 
                
         Node*temp=q.front();
            q.pop();
                while(temp!=NULL) 
                {
                if(temp->left)  q.push(temp->left);
                    sum+=temp->data;
                    temp=temp->right;
                }
                
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
