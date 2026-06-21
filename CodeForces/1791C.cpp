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
#define all(x) (x).begin(), (x).end()
#define ff first
#define ss second


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int i=0,e=n-1,count = n;
        while(i<e){
            if(s[i] != s[e]){
                i++;
                e--;
                count-= 2;
            }
            else{
                break;
            }
        }
        cout << count << "\n";
    }

    return 0;
}