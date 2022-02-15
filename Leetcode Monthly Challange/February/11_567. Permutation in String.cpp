class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>mp;
        for(int i=0;i<s1.size();i++){
            mp[s1[i]]++;
        }
        map<char,int>mp2;
        for(int i=0;i<s2.size();i++){
            if(i<s1.size()-1){
                mp2[s2[i]]++;
            }else{
                mp2[s2[i]]++;
                if(mp==mp2){
                    return true;
                }else{
                    
                    if(mp2[s2[i-s1.size()+1]]!=1){
                        mp2[s2[i-s1.size()+1]]--;
                    }else{
                        mp2.erase(s2[i-s1.size()+1]);
                    }
    
                }
            }
        }
        return false;    
    }
};