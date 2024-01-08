/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/

class Solution
{
    public:
    
    Node* solve( Node* first, Node* second ) {
        
        // If only one element present in first Linked list 
        if( first -> next == NULL ) {
            first -> next = second ; 
            return first ;
        }
        
        Node* curr1 = first ; 
        Node* next1 = curr1 -> next ;
        Node* curr2 = second ;
        Node* next2 = curr2 -> next ;
        
        
        while( next1 != NULL && curr2 != NULL ) {
            
            // Check condition 
            if( (curr1 -> data <= curr2 -> data ) && 
                    (curr2 -> data <= next1 -> data )) {
                
                curr1 -> next = curr2 ;
                next2 = curr2 -> next ;
                curr2 -> next = next1 ; 
                
                // Pointer ko aage badana padgea
                curr1 = curr2 ; 
                curr2 = next2 ; 
            }
            else {
                curr1 = next1 ;
                next1 = next1 -> next ; 
                
                if( next1 == NULL ) {
                    curr1 -> next = curr2 ; 
                    return first ;
                }
            }
        }
        
        return first ; 
    }
    
    struct Node*  reverse(Node* head ) {
        
        if( head == NULL || head -> next == NULL) {
            return head ;
        }
        
        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            
            next = current->next;
            
            current->next = prev;
            
            prev = current;
            current = next;
        }
        head = prev;
        return head ;
    }
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        if( node1 == NULL ) {
            return reverse(node2) ;
        }
        
        if( node2 == NULL ) {
            return reverse(node1) ;
        }
        
        if(node1 -> data <= node2 -> data ) {
            Node* res = solve( node1, node2 ) ;
            return reverse(res ) ;
        } 
        else {
            Node* res = solve( node2, node1 ) ;
            return reverse(res) ;
        }
        
         
        
        
    }  
};
