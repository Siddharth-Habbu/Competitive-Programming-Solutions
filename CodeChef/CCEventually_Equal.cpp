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
        ll A,B,C;
        cin >> A >> B >> C;

        if(A == B){
            cout << 0 << "\n";
        }
        else if (gcd(A, C) == gcd(B, C)) {
            cout << 1 << '\n';
        }
        else if (gcd(A, C + 1) == gcd(B, C + 1)) {
            cout << 2 << '\n';
        }
        else {
            cout << 3 << '\n';
        }
    }

    return 0;
}