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

    l n, mx= LONG_MIN,count = 0;
    cin >> n;


    map<long,long> mp1;

    for(int i = 0;i<n;i++){
        int x,k;
        cin >> x >> k;
        mp1[x] = k;
    }

    for(auto it: mp1){
        if(mx > it.second){
            count++;
            break;
        }
        else{
            mx = max(mx,it.second);
        }
    }

    if(count > 0){
        cout << "Happy Alex";
    }
    else{
        cout << "Poor Alex";
    }

    return 0;
}