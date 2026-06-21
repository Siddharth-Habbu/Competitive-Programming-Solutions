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
        int n,k,count = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        
        int i = 0;
            for(int i =0;i<n-k;i++){
                int r = i+k;
                if(s[i] != '0'){
                    s[i] = '0';
                    if(s[r] == '0')
                        s[r] = '1';
                    else
                        s[r] = '0';
                }

            }
            for(int j =0;j<n;j++){
                if(s[j] == '0'){
                    count++; 
                }
            }
            if(count == n){
                cout << "Yes" << "\n";
            }
            else{
                cout << "No" << "\n";
            }
        
    }

    return 0;
}