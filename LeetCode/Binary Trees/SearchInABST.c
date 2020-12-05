
//  * Definition for a binary tree node.
#include<stdlib.h>
 
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
struct TreeNode* searchBST(struct TreeNode* root, int vall){
    if(root == NULL)
        return NULL;
    else{
        if(root->val == vall)
            return root;
        else if(root->val>vall)
            return searchBST(root->left,vall);
        else 
            return searchBST(root->right,vall);
    }

}