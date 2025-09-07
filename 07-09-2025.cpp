/*Linked list Node structure

struct Node
{
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
  
  class comp{
        public:
        bool operator()(Node* a, Node* b){
            return a->data > b->data;
        }
    };
  
    Node* mergeKLists(vector<Node*>& arr) {
        
        priority_queue<Node*,vector<Node*>,comp>pq;
        for(auto x:arr){
            pq.push(x);
        }
        
        Node* tail = new Node(0);
        Node* head = tail;
        Node *temp;
        
        while(!pq.empty()){
            temp = pq.top();
            pq.pop();
            tail->next = temp;
            tail = tail->next;
            if(temp->next){
                pq.push(temp->next);
            }
        }
        
        return head->next;
    }
};
