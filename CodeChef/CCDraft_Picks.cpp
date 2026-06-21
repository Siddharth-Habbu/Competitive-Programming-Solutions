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
        ll n, k;
        cin >> n >> k;

        if (n == k) {
            cout << n << "\n";
        }
        else if (n > k) {
            cout << k << "\n";
        }
        else {
            map<ll, ll> mp1;

            ll j = k;

            for (ll i = 0; i < n && j > 0; i++) {
                mp1[i] = j;
                j--;
                
            }

            if (j < n) {
                while (j > 0) {
                    for (ll i = n-1; i > 0 && j > 0; i--) {
                        mp1[i] += j;
                        j--;
                    }
                }
            }else{
                while (j > 0) {
                    for (ll i = n-1; i >= 0 && j>0; i--) {
                        mp1[i] += j;
                        j--;
                    }
                    for(ll i = 0; i<n && j > 0;i++){
                        mp1[i] += j;
                        j--;
                    }
                }
            }
            ll mx = 0;
            for(auto it :mp1){
                mx = max(mx,it.second);
            }
            cout << mx << "\n";
        }
    }
    return 0;
}