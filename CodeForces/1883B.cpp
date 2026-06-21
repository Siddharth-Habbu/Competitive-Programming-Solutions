# include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,k,count =0;
        cin >> n >>k;
        string s;
        cin >> s;
        map<char,int> m;
        for(int i = 0;i<n;i++){
            m[s[i]]++;
        }
        for(int i = 0;i<n;i++){
            if(m[s[i]] % 2 != 0){
                count++;
            }
    }
    if(count > k+1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    }
    return 0;
}