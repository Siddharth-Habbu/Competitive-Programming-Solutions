#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,countmin = 0,countmax = 0;
        cin >> n;
        vector<long long> v(n);
        for(int i =0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        for(int i = 0;i <= n/2;i++){
            if(v[i] != v[n/2]){
                countmin++;
            }
            else{
                break;
            }
        }
        for(int j = (n/2)+1;j < n;j++){
            if(v[j] != v[n/2]){
                countmax++;
            }
    }
        cout << max(countmin,countmax) << "\n";
    }
    return 0;
}