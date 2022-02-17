class Solution {
public:
    char findTheDifference(string s, string t) {
        int i=0, j=0;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        while(i<t.length() && j<t.length()){
            if(t[i]!=s[j])
                return t[i];
            i++;
            j++;
        }
        return t[0];
    }
};
