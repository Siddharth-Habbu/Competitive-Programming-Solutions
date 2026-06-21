#include <bits/stdc++.h>
using namespace std;
const int N = 10;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        char matrix[10][10];
        int a=1,b=2,c=3,d=4,e=5,score = 0;
        for(int i = 0;i<N;i++){
            for(int j = 0;j<N;j++){
                cin >> matrix[i][j];
                if('X' == matrix[i][j]){
                    int layer = min({i,j,9-i,9-j});
                    score += layer + 1;
                }
            }
        }
        cout << score << "\n";
    }

    return 0;
}