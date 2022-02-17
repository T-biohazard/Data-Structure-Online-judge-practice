class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
         if(nums.size() == 0)
             return NULL;
        int mid = nums.size() / 2;
        vector<int> l = vector<int>(nums.begin(), nums.begin() + mid);
        vector<int> r = vector<int>(nums.begin() + mid + 1, nums.end());
        TreeNode* tree = new TreeNode(nums[mid], sortedArrayToBST(l), sortedArrayToBST(r));
        return tree;
    }
};
