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

    int n,k;
    cin >> n >> k;
    
    vector<int> v1(n);
    for(int i = 0;i<n;i++){
        cin >> v1[i];
    }
    ll mx = 0;

    if(k < n){
        for(int i = 0;i<k;i++){
            mx += v1[i];
        }
        
        ll sum = mx, idx = 1;
        
        
        for(int i = 1;i<=n-k;i++){
            
            sum = sum + v1[i+k-1] - v1[i-1] ;
            if(sum < mx){
                mx = sum;
                idx = i+1;
            } 
        
        } 

        cout << idx;
    }
    else if (k==n){
        cout << 1;
    }

    return 0;
}