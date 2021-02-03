class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string ret;
        int i, j, l, k=0;
        for( i=0; i<strs[0].length(); i++) {
            for(j=1; j<strs.size(); j++) {
                if(strs[j][i]!=strs[0][i]){
                    ret.append(strs[0],0,k);
                    return ret;
                }
            }
            k++;
        }
        ret.append(strs[0],0,k);
        return ret;
    }
};
