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

    int n;int m;
    cin >> n;
    vll v1(n);
    for(int i = 0;i<n;i++){
        cin >> v1[i];
        
    }
    cin >> m;
    vll v2(m);
    for(int i = 0;i<m;i++){
        cin >> v2[i];
    }

    
    long long s2 = 0;
    vll vz(n);
    for(int i = 0;i<n;i++){
        s2 += v1[i];
        vz[i] = (s2);
        
    }

    for(int i = 0;i<m;i++){
        int target = v2[i];
        auto it = lower_bound(vz.begin(),vz.end(),target);
        int index = distance(vz.begin(), it);
            cout << index + 1 <<"\n";
    }
    return 0;
}
/*
This solution is brute force method and slightly optimised 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;int m;
    cin >> n;
    vll v1(n);
    for(int i = 0;i<n;i++){
        cin >> v1[i];
    }
    cin >> m;
    vll v2(m);
    for(int i = 0;i<m;i++){
        cin >> v2[i];
    }
 
    
    int s1 = 0;
    for(int i = 0;i<n/2;i++){
        s1 += v1[i];
    }
 
    for(int i = 0;i<m;i++){
        if(v2[i] > s1){
            int count = n/2,sum = s1;
            for(int j = n/2;j<n;j++){
                sum += v1[j];
                count++;
                if(v2[i] < sum){
                    break;
                }
            }
            cout << count << "\n";
        }
        else{
            int count = 0,sum = 0;
            for(int j = 0;j<n/2;j++){
                if(v2[i] < sum ){
                    break;
                }
                sum += v1[j];
                count++;
 
            }
            cout << count << "\n";
        }
       
    }
 
 
 
    return 0;
}
    */ 