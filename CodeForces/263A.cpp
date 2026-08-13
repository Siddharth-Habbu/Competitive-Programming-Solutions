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

    int v1[5][5],i1,j1;


    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            cin >> v1[i][j];
            if(v1[i][j] == 1){
                i1 = i;
                j1 = j;
            }
        }
        
    }

    cout << abs(i1+1 - 3) + abs(j1+1 - 3) ;

    





    return 0;
}