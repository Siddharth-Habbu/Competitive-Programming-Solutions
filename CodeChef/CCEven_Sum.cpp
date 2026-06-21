#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,odd = 0, even = 0;;
        cin >> n;
        vector <int> v(n);
        long long sum = 0; 
        for (int i = 0;i<n;i++){
            cin >> v[i];
            sum += v[i];
            if (0 == v[i]%2) even++;
            else odd++;
        }
        if(sum % 2 == 0) {
            if(even > 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else {
            if(odd > 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;

}