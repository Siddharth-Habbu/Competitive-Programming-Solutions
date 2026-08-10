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

    int n;
    cin >> n;

    vi v1(n);
    for(int i = 0;i<n;i++){
        cin >> v1[i];
    }
    int c = -1;
    for(int i =0;i < n;i++){
        if(i == 0){
            c = -1;
        }
        else{
            for(int j = 0;j<i;j++){
            if(v1[j] > v1[i]){
                c = j+1;
            }
        }
        }
        
        cout << c << "\n";
        c = -1;
    }

    return 0;
}