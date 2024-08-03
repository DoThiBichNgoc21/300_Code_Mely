#include <iostream>
#include <cmath>

using namespace std;

void phantich ( long long n ){
    for ( int i = 2; i < sqrt(n); i++){
        while ( n % i == 0 ){
            cout << i;
            n /= i;
            if ( n > 1 ){
                cout << "*";
            }
        }
    }
    if ( n > 1 ){
        cout << n;
    }
}

int main(){
    long long N;
    cin >> N;
    phantich(N);
    return 0;
}
