#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while( t != 0 ){
        int n;
        cin >> n;
        long long a[n];
        for ( int i = 0; i < n; i++ ){
            cin >> a[i];
        }
        int sum = 0;
        for ( int i = 0; i < n; i++ ){
            sum += a[i];
        }
        int x = sum / n;
        if ( x*n != sum ){
            if ( abs( x*n - sum ) > abs( (x+1)*n - sum )){
                x++;
            }
        }
        cout << x << endl;
        t--;
    }
    return 0;
}
