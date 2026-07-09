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


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int N;
        cin >> N;

        vi v1(N);
        for(int i = 0;i<N;i++){
            cin >> v1[i];
        }

        if(N <= 2){
            cout << min(v1[0],v1[1]) << "\n";
        }
        else{
            int m = INT_MIN;
            for(int i = 0;i<N-1;i++){
                int mn = min(v1[i+1],v1[i]);
                m = max(mn,m);
            }
            cout << m << "\n";
        }
        
    }

    return 0;
}
