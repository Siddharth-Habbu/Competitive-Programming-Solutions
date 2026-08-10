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
        int X, Y, P, c1 = INT_MAX;
        cin >> X >> Y >> P;

        for (int i = 0; i <= 100; i++) {
            int j = max(0, (P + X + i - 1) / (X + i) - Y);
            c1 = min(c1, i + j);
        }

        cout << c1 << "\n";
    }
}