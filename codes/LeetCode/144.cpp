// [144. 二叉树的前序遍历] https://leetcode-cn.com/problems/binary-tree-preorder-traversal/
class Solution {
public:
    void traversal(TreeNode* r, vector<int>& vec) {
        if (r == NULL) return;
        vec.push_back(r->val);   
        traversal(r->left, vec); 
        traversal(r->right, vec); 
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        traversal(root, result);
        return result;
    }
};
