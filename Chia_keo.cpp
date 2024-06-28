#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while ( t != 0 ){
        int n, m;
        cin >> n >> m;
        long long a[n];
        for ( int i = 0; i < n; i++ ){
            cin >> a[i];
        }
        long long sum = 0;
        for ( int i = 0; i < n; i++ ){
             sum += ( (m / ( a[i] + 1 ) + ( m % ( a[i] + 1 ))));
        }
        cout << sum << endl;
        t--;
    }
    return 0;
}
