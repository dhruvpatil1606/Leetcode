/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        if(head==NULL) //if original list is empty than return copy list as empty
        {
            return {};
        }

        Node *newNode=new Node(0); // creating a copy linkd list starting        
        
        Node *head2=newNode; //returning pointer og copy list                
        
        Node *ptr=head; //assigning pointer to copy original list and next pointer
        while(ptr!=NULL)
        {                                    
            newNode->val=ptr->val;
            newNode->random=NULL;            // random pointer reamin NULL as for now
            ptr=ptr->next;
            
            if(ptr!=NULL) // if condition for not creating last extra node
            {
                newNode->next=new Node(0); //creates a node                
                newNode=newNode->next;            
            }
        }

        // random pointer assigning from here                    
        
        ptr=head;    
        Node *ptr2=head2;    
        while(ptr!=NULL)
        {                                       
                Node *address=ptr->random;
                Node *ptr3=head;
                Node *ptr4=head2;
                while(ptr3!=address)
                {                    
                    ptr3=ptr3->next;
                    ptr4=ptr4->next;
                }                
                ptr2->random=ptr4;
            
            ptr=ptr->next;
            ptr2=ptr2->next;
        }
        return head2;
    }
};