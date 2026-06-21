#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        if(0 == n%2){
            cout << "Yes \n";
        }
        else{
            if(0 == k%2){
                cout << "No \n";
            }
            else{
                cout << "Yes \n";
            }
        }
    }
    return 0;
}