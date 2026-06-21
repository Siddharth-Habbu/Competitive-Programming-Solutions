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
    vi v1(n),v2(n);
    for(int i = 0; i<n;i++){
        cin >> v1[i];
    }
    for(int i = 0;i<n;i++){
        cin >> v2[i];
    }



    int count = 0,i = 0;
    while(i<n){
        int j = v1[i] -1;
        if(i+1 != v2[j]){
            count+=1;
        }
        i++;
    }
    if(count > 0 )
        cout << "No";
    else
        cout << "Yes";
    
    return 0;
}