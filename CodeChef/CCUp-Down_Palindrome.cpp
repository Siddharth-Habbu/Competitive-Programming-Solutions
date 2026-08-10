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
using vl = vector<long>;
using vll = vector<long long>;

#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ff first
#define ss second
#define sz(x) (int)(x).size()

const ll INF = 1e18;
const int MOD = 1e9 + 7;

ll gcdll(ll a, ll b){
    return b ? gcdll(b, a % b) : a;
}

ll lcmll(ll a, ll b){
    return a / gcdll(a, b) * b;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;

        long long l = -(1LL << 60), r = (1LL << 60);
        bool f = true;

        for (int i = 0, j = n - 1; i < j; i++, j--) {
            if (a[i] == a[j])
                continue;

            if (a[i] + 2 == a[j]) {
                l = max(l, a[i]);
                r = min(r, a[j] - 1);
            }
            else if (a[j] + 2 == a[i]) {
                l = max(l, a[j]);
                r = min(r, a[i] - 1);
            }
            else {
                f = false;
                break;
            }
        }

        cout << (f && l <= r ? "Yes" : "No") << '\n';
    }
}