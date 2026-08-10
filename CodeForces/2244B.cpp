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
        int n,count = 0;
        cin >> n;
        bool un = true;

        vll v1(n);
        for(int i = 0;i<n;i++){
            cin >> v1[i];
        }


            int count1 = 0; ll sum = 0;
            for(int i = 0;i<n;i++){
                ll d = v1[i] - (i+1);
                if(d>0){
                    sum += d;
                    v1[i] -= d;
                }
                else if(d<0){
                    if(sum >= -d){
                        sum += d;
                        v1[i] -= d;
                    }
                    else{
                        un = false;
                        break;
                    }
                }
                if(i == n-1 && sum >0){
                    v1[i] += sum;
                    sum = 0;
                }
                
            }
            if(!un){
                cout << "No\n";
                continue;
            }
                        
            for(int i = 1;i<n-1;i++){
                if(v1[i] <= v1[i-1] || v1[i] >= v1[i+1]){
                    count1++;
                }
               
            }
            
            if(count1 == 0){
                cout << "Yes" << "\n";
            }
            else{
                cout << "No" << "\n";
            }
            
        }
    

    return 0;
}