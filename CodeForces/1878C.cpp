#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long mins = k * (k + 1) / 2;
        long long maxs = k * (2 * n - k + 1) / 2;

        if (mins <= x && x <= maxs)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}