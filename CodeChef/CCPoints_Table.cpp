#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int X,Y,A,B;
    string s;
    cin >> X >> Y >> A >> B;
    if (X > A){
        s = "Alice\n";
    }
    else if (X == A){
        if (Y > B){
            s = "Alice\n";
        }
        else if (Y < B){
            s = "Bob\n";
        }
        else{
            s = "Alice\n";
        }
        }
    else{
        s = "Bob\n";
    }
    cout << s;
    return 0;
    }
