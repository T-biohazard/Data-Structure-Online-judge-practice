class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> t;
        preOrder(root, t);
        return t;

    }
    void preOrder(TreeNode* root, vector<int>&p){
        if(root==NULL)
            return;
        p.push_back(root->val);
        preOrder(root->left, p);
        preOrder(root->right, p);
    }
};
