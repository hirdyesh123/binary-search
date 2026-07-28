// Last updated: 7/28/2026, 9:54:53 PM
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>s;
        int count=0;
        for(int i=0;i<words.size();i++){
            s.insert(words[i]);
        }

    for(int i=0;i<words.size();i++){
            string rev= words[i];
            string ran= words[i];
            reverse(rev.begin(),rev.end());
          if(rev!=ran){
            if(s.find(rev)!=s.end()){
                count++;
                s.erase(ran);
            }
          }
    }
        return count;
    }
};