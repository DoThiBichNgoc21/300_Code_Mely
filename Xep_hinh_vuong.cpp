#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while( t != 0 ){
        int n;
        cin >> n;
        long long a = sqrt(n);
        while ( n % a != 0 ){
            a--;
        }
        cout << a << " " << n / a << endl;
        t--;
    }
    return 0;
}

