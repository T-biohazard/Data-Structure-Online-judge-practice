class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> t;
        postOrder(root, t);
        return t;
    }
    void postOrder(TreeNode* root, vector<int> &p){
        if(root==NULL)
            return;
        postOrder(root->left, p);
        postOrder(root->right, p);
        p.push_back(root->val);
    }
};
