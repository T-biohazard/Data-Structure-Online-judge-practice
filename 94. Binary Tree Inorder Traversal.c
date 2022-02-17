class Solution {
public:
    vector<int> s;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)
            return s;
        else{
            inorderTraversal(root->left);
            s.push_back(root->val);
            inorderTraversal(root->right);
        }
        return s;
    }
};
