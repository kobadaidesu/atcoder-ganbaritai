#include "cp.hpp"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i]; 
    map<string, int> mp;
    rep(i, m) {
        string t;
        cin >> t;
        if (mp.count(t))
        {
            
        }
    }
    rep(i, n) cout << mp[s] << endl
}
