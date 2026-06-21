#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    double n;
    cin >> n;
    int rr = n/20;
    if (20*rr <= n){
        rr += 1;
    }
    cout << rr;
    return 0;

}
