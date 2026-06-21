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
 
    ll n,k;
    cin >> n >> k;
 
    vll v1(n);
    for(ll i = 0;i<n;i++){
        cin >> v1[i];
    }
    sort(v1.begin(),v1.end());
 
    if(k < n && k > 0){
        if(k >= 1 && v1[k-1] == v1[k]){
            cout << -1;
        }
        else{
            if(k > 1 && v1[k-1] + 1 != v1[k]){
                cout << v1[k-1]+1;
            }
            else{
                cout << v1[k-1];
            }
        }
    }
    else if(k == n){
        cout << v1[k-1];
    }
    else{
        if(v1[0] > 1){
            cout << v1[0] - 1;
        }
        else
            cout << -1;
    }
 
    return 0;
}