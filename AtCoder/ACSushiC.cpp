#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long n,m,count = 0,i = 0, j= 0;
    cin >> n >> m;
    vector<long long> a(n),b(m);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
     while(i < n && j < m) {
        if(b[j] <= 2 * a[i]) {
            count++;
            i++;
            j++;
        } else {
            i++;
        }
    }

    cout << count << '\n';
    return 0;
}