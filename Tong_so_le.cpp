#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[1000];
    for ( int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for ( int i = 0; i < n; i++ ){
        if ( a[i] % 2 == 1 ){
            sum += a[i];
        }
    }
    cout << sum;
    return 0;
}
