class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        sort(nums.begin(), nums.end());
        for(i=0; i<nums.size(); i++){
            if(i!=nums[i])
                return i;
        }
        return nums.size();
    }
};
