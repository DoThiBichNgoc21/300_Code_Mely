#include <bits/stdc++.h>

using namespace std;

int main(){
   int N;
    cin >> N;

    pair<long long,long long> a[N];
    for ( int i = 0; i < N; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort (a, a + N);
    long long cnt = 0;
    for ( int i = 0; i < N-1 ; i++ ){
        for ( int j = i + 1; j < N; j++)
           if ( a[j].first < a[i].second ){
                cnt++;
           }
    }
    cout << cnt;
    return 0;
}
