class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> tem = heights;
        sort(tem.begin(), tem.end());
        int c=0;
        for(int i=0; i<tem.size(); i++){
            if(tem[i]!=heights[i])
                c++;
        }
        return c;
    }
};
