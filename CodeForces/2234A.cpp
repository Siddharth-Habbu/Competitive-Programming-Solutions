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
        cin >> n;
        vll x(n);
        for(int i=0;i<n;i++){
           cin >> x[i];
        }

        sort(all(x), greater<ll>());
        int count = 0;
        if(n > 2){
            for(int i = 0;i<n-2;i++){
                int j = i+1,k=i+2;
                if(x[i]%x[j] == x[k]){
                        count++;
                    }
                else{
                        count = 0;
                        cout <<  "-1\n";
                        break;
                    }
            }
            if(count == n-2){
            cout << x[0] << " " << x[1] << "\n";
            }
        }
        else{
                cout << x[0] << " " << x[1] << "\n";
            }
        
    }   

    return 0;
}