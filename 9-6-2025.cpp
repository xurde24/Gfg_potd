/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

class Solution {
  public:
    bool fun(Node* root, int mini, int maxi){
        if(!root)
            return false;
        if((root->data == mini) && (mini == maxi))
            return true;
        int rd = root->data;
        
        return (fun(root->left, mini, rd-1) || fun(root->right, rd+1, maxi));
    }
  
    bool isDeadEnd(Node *root) {
        // Code here
        return fun(root, 1, 1000000);
    }
};

