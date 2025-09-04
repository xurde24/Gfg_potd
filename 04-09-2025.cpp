/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        if(!head||!head->next||k<=1)
        return head;
        Node *temp=new Node(0),*curr,*next,*prev=NULL,*sec;
        temp->next=head;
        head=temp;
        while(temp->next)
        {
            int x=k;
            sec=temp->next,prev=temp,curr=sec;
            while(x--&&curr)
            {
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            temp->next=prev;
            sec->next=curr;
            temp=sec;
        }
        return head->next;
    }
    
};

