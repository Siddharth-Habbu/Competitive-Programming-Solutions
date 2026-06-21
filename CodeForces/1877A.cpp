#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;
    while(t--){
        long long n = 0,sum = 0;
        cin >> n;
        vector <long long> v1(n);
       
        for(int i = 0; i < n-1; i++){
            cin >> v1[i];
            sum -= v1[i];
        }
        cout << sum << "\n";
    }

    return 0;
} 