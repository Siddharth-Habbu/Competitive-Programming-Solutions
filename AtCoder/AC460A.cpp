#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,count = 0;
    cin >> n >> m;
    while(m != 0){
        int r = n % m;
        n = m;
        m = r;
        count++;
    }
    

    cout << count;
    return 0;
}