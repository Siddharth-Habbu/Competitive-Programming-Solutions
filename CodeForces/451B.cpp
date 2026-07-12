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

    vll v1(n);
    for(int i = 0;i<n;i++){
        cin >> v1[i];
    }
    vll v2 = v1;
    sort(v2.begin(),v2.end());

    int r = n-1,l = 0 ;
    for(int i = 1;i<n;i++){
       if(v1[l] > v1[i]){
            break;
        }
        else{
            l++;
        }
    }
    for(int i = n-2;i>= 0;i--){
        if(v1[r] < v1[i]){
            break;
        }
        else{
            r--;
        }
    }
    if(l == n-1 && r == 0){
        l=r;
    }
    else{
        if(l<r && v1[r]<v1[l]){
            reverse(v1.begin()+l,v1.begin()+r+1);
        }   
    }
    if(v1 == v2){
        if(l<r)
            cout << "yes" << "\n" << l+1 << " " << r+1;
        else
             cout << "yes" << "\n" << r+1 << " " << l+1;
    }
    else{
        cout << "no";
    }
    

    return 0;
}