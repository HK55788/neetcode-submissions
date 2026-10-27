class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        int j;
        for(int i=1;i<strs.size();i++){
            j=0;
            while(j<min(strs[i].size(),prefix.length()) && strs[i][j]==prefix[j]){
                j++;
            }
            prefix=prefix.substr(0, j);
        }
        return prefix;
    }
};