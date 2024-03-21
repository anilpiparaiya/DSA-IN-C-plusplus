class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
        vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	deque<Node*> q;
    	q.push_back(root);
    	vector<int> res;
    	bool flag=true;
    	while(!q.empty()){
    	    int n=q.size();
	        while(n--){
	            if(flag){
	                auto node=q.front();
	                q.pop_front();
	                if(node->left) q.push_back(node->left);
	                if(node->right) q.push_back(node->right);
	                res.push_back(node->data);
	            }
	            else{
	                auto node=q.back();
	                q.pop_back();
	                if(node->right) q.push_front(node->right);
	                if(node->left) q.push_front(node->left);
	                res.push_back(node->data);
	            }
	        }
	        flag=!flag;
    	}
    	return res;
    }

};
