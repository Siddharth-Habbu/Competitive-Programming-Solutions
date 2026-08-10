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
        int c1 = 0,c2 = 0;
        vi v1(5);
        for(int i = 0;i<v1.size();i++){
            cin >> v1[i];
            if(v1[i] >= 60){
                c1++;
                c2++;
            }
            else if(v1[i] >= 30){
                c1++;
            }
        }
        if(c1 > 3 && c2 > 1){
            cout << "Pass" << "\n";
        }
        else{
            cout << "Fail" << "\n";
        }

    }

    return 0;
}