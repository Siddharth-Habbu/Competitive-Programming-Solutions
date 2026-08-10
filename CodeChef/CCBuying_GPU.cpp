
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int X,Y,Z,S,c1=0;
        cin >> X >> Y >> Z;
        S = 0;
        if(Y >= Z){
            cout << -1 << "\n";
        }
        else{
            while(X>S){
            S += Z;
            X += Y;
            c1++;
        }
        cout << c1 << "\n";
         
            
        }
        
    }


    return 0;
}