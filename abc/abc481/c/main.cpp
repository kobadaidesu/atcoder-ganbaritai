#include "cp.hpp"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    map<string, int> mp;
    int cnt = 1;
    rep(i, q) {
        string query;
        cin >> query;
        if (!mp.count(query)) {
            mp[query] = cnt;
            cnt++;
        }
        cout << mp[query] << endl;
    }
}