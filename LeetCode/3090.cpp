class Solution {
public:
    int maximumLengthSubstring(string s) {
        int k = 0,c1 = 0,mx=INT_MIN;
        map<char,int> mp1;

        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
            c1++;
            if(mp1[s[i]] > 2){
                while(s[k] != s[i]){
                    mp1[s[k]]--;
                    k++;
                    c1--;
                    
                }
                mp1[s[k]]--;
                k++;
                c1--;
            }
            mx = max(mx,c1);
        }
        return mx;
    }
};