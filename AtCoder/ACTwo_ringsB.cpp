#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while(t--){
        long long x1,y1,x2,y2,r1,r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        long long dx = (x1-x2);
        long long dy = (y1 -y2);
        long long d = (dx*dx + dy*dy);
        if ( d <= (r1+r2)*(r1+r2) && d >= abs(r1 - r2)*abs(r1 - r2)){
            cout << "Yes\n";
            
        }
        else{
            cout << "No\n";
        }

    }

    return 0;
}