#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = "No";
        map <int,int> m1;
        for(int i =0;i<n;i++){
            int n;
            cin >> n;
            m1[n]++;
        }
        auto it = m1.begin();

        if(it->second >= 2){
            s = "Yes";
        }
        cout << s << "\n";
    }
    return 0;
}