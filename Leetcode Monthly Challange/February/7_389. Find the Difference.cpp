class Solution {
public:
    char findTheDifference(string s, string t) {
        s=s+t;
        char ans=s[0];
        for(int i=1;i<s.length();i++){
            ans=ans^s[i];
        }
        return ans;
    }
};
