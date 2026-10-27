#include "cp.hpp"
#include <algorithm>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int cnt = 0;
    rep(i, n) {
        if (k == a[i]) cnt++ ;
    }
    rep(i, n - 1) {
        if (min(a[i], a[i+1]) < k && max(a[i], a[i+1]) > k) cnt++ ;
    }
    cout << cnt << '\n'; 
}
