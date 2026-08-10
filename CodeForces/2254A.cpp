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
        int a,b,c,c1 = 0;
        cin >> a >> b >> c;

        
        while(a!=b && c!=b && c != a){
            if(max(a,b) == a && max(a,c) == a){
                if(min(b,c) == b){
                    
                    b++;
                }
                else{
                    c++;
                }
                a--;
                c1++;
            }
            else if(max(a,b) == b && max(b,c) == b){
                if(min(a,c) == a){
                    
                    a++;
                }
                else{
                    c++;
                }
                b--;
                c1++;
            }
            else{
                if(min(a,b) == a){
                    a++;
                }
                else{
                    b++;
                }
                c--;
                c1++;
            }
        }
            

            cout << c1 << "\n";
        
    }


    return 0;
}