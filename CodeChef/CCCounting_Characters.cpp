#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,counta = 0,countb = 0;
        string s;
        cin >> n >> s;
        for(int i = 0;i < n;i++){
            if(s[i] == 'a'){
                counta++;
            }
            else{
                countb++;
            }
        }
        cout << counta << " " << countb << "\n"; 
    }
    return 0;
}