class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<int,int> mp1;
        int n = arr.size();
        if(n>2){
             for(int i = 0;i<n-1;i++){
                mp1[arr[i+1]-arr[i]]++;
            }
            if(mp1.size()>1){
                return false;
            }
            else{
                return true;
            }
        }
        else{
            return true;
        }
    }
};