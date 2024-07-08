#include <bits/stdc++.h>

using namespace std;

int xet( int a[], int s, int b, int c){
    int vtri;
    int minn = c;
    for ( int j = s; j < b; j++ ){
        if ( a[j] < minn ){
            vtri = j;
        }
    }
    return vtri;
}

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    for ( int i = 0; i < n; i++ ){
        cin >> a[i];
    }
    int t;
    for ( int i = 0; i < n; i++){
        if( a[i] == 0 ){
                t = i;
        }
    }
    int i1 = xet(a, 0, t, k);
    int i2 = xet(a, t, n, k);
    int kcach;
    if( (k - i1) < (k - i2)){
        kcach = (k - i1) * 10;
    }
    else{
        kcach = (k - i2) * 10;
    }
    cout << kcach;
    return 0;
}


//Code Compilot
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, teo_room, money;
    cin >> n >> teo_room >> money;

    vector<int> room_price(n);
    for (int i = 0; i < n; ++i) {
        cin >> room_price[i];
    }

    // Tính khoảng cách tối thiểu
    int min_distance = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (room_price[i] <= money) {
            int distance = abs(teo_room - i);
            min_distance = min(min_distance, distance);
        }
    }

    // Kết quả
    if (min_distance == INT_MAX) {
        cout << -1; // Không thể thuê phòng nào
    } else {
        cout << min_distance * 2; // Nhân 2 vì khoảng cách giữa các phòng là 1 mét
    }

    return 0;
}
