import java.util.ArrayList;
import java.util.List;

// Definition for a binary tree node.
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class solution {
    public List<Integer> getAllElements(TreeNode root1, TreeNode root2) {
        List<Integer> firstTree = new ArrayList<>();
        List<Integer> secondTree = new ArrayList<>();
        inorder(root1,firstTree);
        inorder(root2,secondTree);
        int i=0,j=0;
        List<Integer> res = new ArrayList<>();
        while(i<firstTree.size() && j<secondTree.size()){
            if(firstTree.get(i) > secondTree.get(j)){
                res.add(secondTree.get(j++));
            }
            else 
                res.add(firstTree.get(i++));
        }
        while(i<firstTree.size()){
            res.add(firstTree.get(i++));
        }
        while(j<secondTree.size()){
            res.add(secondTree.get(j++));
        }
        return res;
    }

    private void inorder(TreeNode root, List<Integer> Tree) {
        if(root == null)
            return;
        inorder(root.left, Tree);
        Tree.add(root.val);
        inorder(root.right, Tree);
    }
}