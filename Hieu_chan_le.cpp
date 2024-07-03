#include <bits/stdc++.h>

using namespace std;


int main(){
    long long n;
    cin >> n;
    long long a[n];
    for ( int i = 0; i < n; i++ ){
        cin >> a[i];
    }
    long long sumle = 0, sumchan = 0;
    for ( int i = 0; i < n; i++ ){
        if ( i % 2 == 0 ){
            sumchan += a[i];
        }
        else{
            sumle += a[i];
        }
    }
    long long unsum = sumle - sumchan;
    cout << unsum;
    return 0;
}
