class Solution {
public:
    int pivotInteger(int n) {
        int sum1 = 0,sum2 = 0, j = -1;

        for(int i = 1;i <= n;i++){
            sum2 += i;
        }
        
        if(n>1){
            for(int i = 1;i<=n;i++){
                sum1 += i;
                if(sum1 == sum2){
                    j = i;
                    break;
                }
                sum2 -= i;
                
                
            }
        }
        else{
            j = 1;
        }
        return j;
    }
};