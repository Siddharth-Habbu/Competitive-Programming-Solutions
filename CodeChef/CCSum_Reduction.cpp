#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <long long> v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }
        int i = 0;int p1 = i+1;
        while(i<v.size()-1 && p1 <= v.size()-1){
            
            if((v[i]&v[p1]) == 0){
                long long sum = v[i] + v[p1];
                v.erase(v.begin() + p1);
                v.erase(v.begin() + i);
                v.push_back(sum);
                i=0;
                p1=i+1;
            }
            else{
                p1++;
                if (p1 >= v.size()) {
                    i++;
                    p1 = i + 1;
                }
            }
        }
        if(v.size() == 1){
            cout << "Yes \n";
        }
        else{
            cout << "No \n";
        }
    }
    return 0;
}
