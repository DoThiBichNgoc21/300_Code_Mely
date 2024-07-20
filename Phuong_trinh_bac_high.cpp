#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    if ( a == 0 ){
        if ( b == 0 ){
            if ( c == 0 ){
                cout << "Phuong trinh co 2 nghiem phan biet";
            }
            cout << "Phuong trinh vo nghiem";
        }
        cout << "Phuong trinh co 2 nghiem phan biet";
    }
    else{
        long long delta = ( b*b - 4*a*c );
        if ( delta == 0 ){
            cout << "Phuong trinh co nghiem";
        }
        else if ( delta > 0 ){
            cout << "Phuong trinh co 2 nghiem phan biet";
        }
        else{
            cout << "Phuong trinh vo nghiem";
        }
    }
    return 0;
}
