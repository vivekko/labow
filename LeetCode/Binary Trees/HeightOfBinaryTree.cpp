//   Definition for a binary tree node.
#include <iostream>
#include<math.h>
using namespace std;
int height(TreeNode* root);
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
int main(){
    struct TreeNode* root;
    int h = height(root);
}
int height(TreeNode* root){
    if(root==NULL)
        return 0;
    return 1 + max(height(root->left),height(root->right));
}
