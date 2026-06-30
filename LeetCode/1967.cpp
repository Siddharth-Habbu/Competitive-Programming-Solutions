class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for(auto it: patterns){
            char c = word.find(it);
            if(c != string::npos){
                count++;
            }
        }
        return count;
    }
};