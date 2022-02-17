class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i, s, c=0;
        for(i=0; i<nums.size(); i++){
            if(c==0){
                s=nums[i];
                c=1;
            }
            else if(nums[i]!=s)
                c--;
            else
                c++;
        }
        return s;
    }
};
