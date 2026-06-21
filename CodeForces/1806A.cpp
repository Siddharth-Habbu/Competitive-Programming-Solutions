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

    ll t;
    cin >> t;

    while (t--) {
        ll a,b,c,d;
        cin >> a >> b >> c >> d;

        if(c-a <= d-b){
            ll cy = 0,cx = 0;
            if(b>d){
                cout << -1 << "\n";
            }
            else{
                cy = abs(d-b);
                if(a+cy < c){
                    cout << -1;
                    
                }
                else if (a+cy > c){
                    cx = abs(a+cy-c);
                    cout << cy+cx << "\n";
                }
                else{
                    cout << cy << "\n";
                }
                    
                }
                
            }
            
            
        
        else{
            cout << -1 << "\n";
        }

        
        
    }

    return 0;
}