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


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n,count = 0,mx = INT_MIN,mn = INT_MAX;
        cin >> n;
        vi h(n);
        for(int i = 0;i<n;i++){
            cin >> h[i];
            mn = min(h[i],mn);
            mx = max(mx,h[i]);
        }

        for(int i = 1;i<n;i++){
            if(h[i] == h[i-1]){
                count++;
            }

        }
        if(count == n){
            cout << 1 << "\n";
        }
        else{
            int a = mx-mn;
            cout << a+1 << "\n";
        }
    }

    return 0;
}