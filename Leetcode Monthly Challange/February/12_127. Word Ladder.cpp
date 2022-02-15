static int speedUp=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>st;
        bool flag=true;
        for(int i=0;i<wordList.size();i++){
            st.insert(wordList[i]);
            if(wordList[i] == endWord){
                flag=false;
            }
        }
        if(flag){
            return 0;
        }
        queue<string>q;
        q.push(beginWord);
        int depth = 0;
        while(!q.empty()){
            depth+=1;
            int lsize = q.size();   //No of elements at a level
            while(lsize--)
            {
                string curr = q.front();
                q.pop();
                //check for all possible 1 depth words
                for(int i=0;i<curr.length();++i)  //For each index
                {
                    string temp = curr;
                    for(char c='a';c<='z';++c)  
                    {
                        temp[i] = c;
                        if(curr.compare(temp)==0)
                            continue;   
                        if(temp.compare(endWord)==0)
                            return depth+1; 
                        if(st.find(temp)!=st.end())
                        {
                            q.push(temp);
                            st.erase(temp);
                        }
                    }
                }
            }
        }
       
        return 0;
    }
};