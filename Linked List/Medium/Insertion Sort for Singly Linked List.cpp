//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        //code here
        Node* res = new Node(-1);
        Node* temp = res;
        Node* curr = head_ref;
        while(curr)
        {
            temp = res;
            while(temp->next and curr->data>=temp->next->data)
            {
                temp = temp->next;
            }
            
            Node* nextNode = temp->next;
            temp->next = curr;
            curr = curr->next;
            temp->next->next = nextNode;
        }
        
        return res->next;
    }

    
};
