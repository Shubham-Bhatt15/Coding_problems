/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   // helper function for the first solution.
    void preorder(vector<TreeNode*>&temp,TreeNode* root){
        if(!root)  return ;
        temp.push_back(root);
        preorder(temp,root->left);
        preorder(temp,root->right);
    }

    // helper function to the second solution.

    TreeNode* flat(TreeNode *root){
        if(!root) return NULL;
        TreeNode* leftnode,*rightnode;
        leftnode= flat(root->left);
        rightnode =flat(root->right);
    
        root->right= root->left;
        root->left = NULL;
        if(root->left){
            root->right = root->left;
            leftnode->right  = rightnode;
            leftnode->right = rightnode;
            leftnode->left = NULL;
        }
        
        if(rightnode) return rightnode;
        return  leftnode;
        

    }

    // void flatter(vector<TreeNode>&temp)
    void flatten(TreeNode* root) {
        // if(!root) return ;
        // vector<TreeNode*> temp;
        // preorder(temp,root);
        // TreeNode* ans = temp[0];
        // TreeNode* head = ans;
        // for(int i=1;i<temp.size();i++){
        //     ans->right = temp[i];
        //     ans->left = NULL;
        //     ans = ans->right;
        // }
        // ans->right = NULL;
        flat(root);
    }
};