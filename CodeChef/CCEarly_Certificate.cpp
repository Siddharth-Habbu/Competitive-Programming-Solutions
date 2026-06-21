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
        ll n,m,a,i = 0;
        string s,r,q;
        cin >> n >> m >> s >> r;

        if(n>m){
            a = n;
        }
        else{
            a = m;
        }
        while(i < a){
            if(s[i] == r[i]){
                q += s[i];
                i++;
            }
            else{
                break;
            }
        }
        cout << q << "\n";

    }

    return 0;
}