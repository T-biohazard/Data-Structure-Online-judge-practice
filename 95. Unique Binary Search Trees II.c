class Solution {
public:
     vector<TreeNode*> subTree(int start, int end){
        vector<TreeNode*> s;
        if(start > end){
            s.push_back(NULL);
            return s;
        }

        for(int i=start; i<=end; ++i){
            vector<TreeNode*> left = subTree(start,i-1);
            vector<TreeNode*> right = subTree(i+1,end);
            for(auto &l : left){
                for(auto &r : right){
                    TreeNode* newNode = new TreeNode(i);
                    newNode->left = l;
                    newNode->right = r;
                    s.push_back(newNode);
                }
            }
        }
        return s;
    }
    vector<TreeNode*> generateTrees(int n) {
        return subTree(1,n);
    }
};
