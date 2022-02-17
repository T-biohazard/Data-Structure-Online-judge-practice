class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> p;
        tree(root,p);
        return p;
    }

    void tree(Node* root, vector<int>&p){
        if(root==NULL)
            return;
        p.push_back(root->val);
        cout<<" "<<(root->children).size();
        for(int i=0; i<(root->children).size(); i++)
            tree((root->children)[i], p);
    }
};
