#include <bits/stdc++.h>

using namespace std;


int main(){
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    int b = b1 * b2;
    a1 = (b / b1) * a1;
    a2 = (b / b2) * a2;
    int a = a1 + a2;
    for ( int i = max(a,b); i > 1; i--){
        if ( a % i == 0 && b % i == 0 ){
            a/=i;
            b/=i;
        }
    }
    cout << a << " " << b;
    return 0;
}
