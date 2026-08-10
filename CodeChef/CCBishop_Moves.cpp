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

    while (t--) {
        int X1,Y1,X2,Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;
        int N1,M1,N2,M2;
        N1 = (X1+Y1)%2;
        M1 = (X2+Y2)%2;
        if(abs(X1-X2) == abs(Y1-Y2)){
            cout << 1 << "\n";
        }
        else if(N1 == M1){
            cout << 2 << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }


    return 0;
}