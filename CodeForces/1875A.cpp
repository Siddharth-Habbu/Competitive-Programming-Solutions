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
 
    while (t--) {
       ll a,b,n;
       cin >> a >> b >> n ;
 
       vi v1(n);
       for(int i = 0;i<n;i++){
        cin >> v1[i];
       }
 
       ll c1 = 0,k = 0;
 
       while(b > 0){
        if(b==1 && k < n){
                b += v1[k];
                k++;
        }
        if(b > a){
                  b = a;
                }
        c1 += b-1;
        if(b > 1){
            b = 1;
        }
        else{
            b = 0;
            c1++;
        }
       }
       cout <<  c1 << "\n";
    }
 
 
    return 0;
}
