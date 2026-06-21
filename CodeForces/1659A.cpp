/*
Written & Produced By: Czhearth
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using l = long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define ff first
#define ss second


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n,r,b;
        string s;
        cin >> n >> r >> b;

        if(n == b+r){
            if(b < r){
                for(int i = 0;i<n-1;i++){
                    int j = i-1,h=i-2;
                    s[i] = 'R';
                    if(i >= 2 && s[h] == s[i] && s[h]== s[j]){
                        s[i] = 'B';
                    }
                }
                
            }
        }
        for(int i = 0;i<n;i++){
            cout << s[i] << "\n";
        }
    }

    return 0;
}