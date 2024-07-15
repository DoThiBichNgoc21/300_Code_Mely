#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for ( int i = 0; i < n; i++){
        cin >> a[i];
    }
    set<int> du;
    for ( int i = 0; i < n; i++ ){
       int res = a[i] % k;
       if ( res != 0 ){
        du.insert(res);
       }
    }
    cout << du.size();
    return 0;
}
