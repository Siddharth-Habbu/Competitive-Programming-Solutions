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
        int n,s = 0,d = 0;
        cin >> n;
        vi v(n);

        for(int i=0;i<n;i++){
            cin >> v[i];

        }
        int j = 0,k=n-1;
        for(int i = 0;i<n;i++){
            if(i%2 == 0){
                if(v[j] < v[k]){
                    s += v[k];
                    k--;
                }
                else{
                    s += v[j];
                    j++;
                }
            }
            else{
                if(v[j] < v[k]){
                    d += v[k];
                    k--;
                }
                else{
                    d += v[j];
                    j++;
                }
            }
        }

        cout << s << " "<< d;

    return 0;
}