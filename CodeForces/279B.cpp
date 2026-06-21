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

    int n,t;
    cin >> n >> t;
    vl v1(n);

    for(int i=0;i<n;i++){
        cin >> v1[i];
    }



    ll sum = 0,count = 0,i = 0,j = 0,ans =  0;
    while(i<n && j<n){
        sum += v1[j];
            while(sum > t){
                sum -= v1[i];
                i++;
                
            }
            ans = max(ans,j-i+1);
            j++;
        }

    cout << ans;


    return 0;
}