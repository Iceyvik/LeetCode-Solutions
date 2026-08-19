class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n1=word1.size();
        int n2=word2.size();
        while(n1>0 && n2>0){
            ans.push_back(word1[word1.size()-n1]);
            ans.push_back(word2[word2.size()-n2]);
            n1--;
            n2--;
        }
        while(n1>0){
            ans.push_back(word1[word1.size()-n1]);
            n1--;
        }
        while(n2>0){
            ans.push_back(word2[word2.size()-n2]);
            n2--;
        }
        return ans;
    }
};