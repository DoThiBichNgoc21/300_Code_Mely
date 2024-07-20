#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long a[n + 5];
    for ( int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        a[i] = a[i] % k;
    }
    sort (a, a + n);
    int cnt = 1;
    for (int i = 1; i < n; i++){
        if (a[i] != a[i - 1]) cnt++;
    }
    cout << cnt;
    return 0;
}
