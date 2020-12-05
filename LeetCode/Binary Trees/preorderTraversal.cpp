#include <iostream>
#include<vector>
#include<stack>
    using namespace std;
//  Definition for a binary tree node.
 struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
  
int main()
{
    // TreeNode()
    TreeNode* root;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    v = preorder( root);
    return 0;
}
vector <int> preorder(TreeNode* root){
    stack <TreeNode *> st;
    vector<int > v;
    if(root==NULL)
        return v;
    st.push(root);
    TreeNode* temp;
    while(! st.empty())
    {
        temp = st.top();
        st.pop();
        v.push_back(temp->val);
        if(temp->right)
            st.push(temp->right);
        if(temp->left)
            st.push(temp->left);
    }
    return v;

}
