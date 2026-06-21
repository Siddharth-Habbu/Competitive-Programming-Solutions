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

    int k;
    cin >> k;
    int sum = 0,count = 0,s1 = 0;
    vi v1(12);
    for(int i = 0;i<12;i++){
        cin >> v1[i];
        s1 += v1[i];
    }
    sort(v1.begin(),v1.end());
    
    if (k == 0){
        count = 0;
    }
    else if(k < v1[0] || k == v1[11]){
        count = 1;
    }

    else if(k > s1){
        count = -1;
    }
    else if(k > v1[11] || k < v1[11]){
        if(k > v1[0]){
            int j = 11;
            while(j>=0){
                
                sum += v1[j];
                count ++;
                j--;
                if(sum >= k){
                    break;
                }
            }
        }
    }
    
    cout << count ;
    return 0;
}