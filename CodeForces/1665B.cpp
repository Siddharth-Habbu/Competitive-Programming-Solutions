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
        int n;
        cin >> n;
        map <int,int> mp1;
        int mx = 0;
        for(int i = 0; i < n; i++){
            int x = 0;
            cin >> x;
            mp1[x]++;
        }
        for(auto it: mp1){
            mx = max(mx,it.second);
        }
        if(mx == n){
            cout << 0 << "\n";
        }
        if(1 == mx){
            
        }
        


    }

    return 0;
}