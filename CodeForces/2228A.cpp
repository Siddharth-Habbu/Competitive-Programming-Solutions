#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,count = 0;
        cin >> n;
        vector <int> w(n);
        for(int i =0;i<n;i++){
            cin >> w[i];
        }
        int c0=0,c1=0,c2=0,i=0;
        while (i<n){
            if(0 == w[i])
                c0++;
            else if(1 == w[i])
                c1++;
            else
                c2++;
            i++;
        }
        int c3 = min(c1,c2);
        c1 -= c3;
        c2 -= c3;
        count = c0 + c3 + c1/3 + c2/3;
        cout << count << "\n";
    }
    return 0;
}