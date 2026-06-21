#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
        if(a[i] < 0)
            a[i] = abs(a[i]);

    }
    cout << *min_element(a.begin(), a.end()) << "\n";
    return 0;
}