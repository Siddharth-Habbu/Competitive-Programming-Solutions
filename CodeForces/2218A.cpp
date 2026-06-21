#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x;
        if(x <67){
            y = x+1;
        }
        else{
            y = x;
        }
        cout << max(x,y) << "\n";
    }
    return 0;
}