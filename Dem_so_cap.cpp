#include <bits/stdc++.h>

using namespace std;


int main() {
    long long N, X;
    cin >> N >> X;
    long long a[N];
    for ( int i = 0; i < N; i++){
        cin >> a[i];
    }
    int cnt = 0;
    for ( int i = 0; i< N; i++ ){
        for ( int j = i; j < N; j++ ){
            if ( a[i] * a[i] + a[j] == X ){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}

