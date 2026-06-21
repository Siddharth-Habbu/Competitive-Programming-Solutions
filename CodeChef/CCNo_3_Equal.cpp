#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,count = 0;
        string s;
        cin >> n >>  s;
        if(n>2){
            for(int i = 0;i<n-2;i++){
                int p1 = i+1,p2 = i+2;
                
                if(s[p1] == s[p2] && s[p1] == s[i] && s[p2] == s[i]){
                    count ++;
                    s[p2] = '1';
                }
            }
        }
        cout << count << "\n";
    }

    return 0;
}