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

    int n,m;
    cin >> n >> m;

    map<string,string> mp1;

    for(int i = 0;i<m;i++){
        string s,k;
        cin >> s >> k;
        mp1[s] = k;
    }
    //string stream method 

    /*string a;
    cin.ignore();
    getline(cin,a);
    
    stringstream ss(a);

    string w;

    while(ss >> w){
        auto it = mp1.find(w);
        if(it->first.length() > it->second.length()){
            w = it->second;
        }
        
        cout << w << " ";
    }*/

    //for loop method (already omits "\n")
    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        auto it = mp1.find(a);
        if(it->first.length() > it->second.length()){
            a = it->second;
        }
        cout << a << " ";
    }
        
        
    

    return 0;
}