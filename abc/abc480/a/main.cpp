#include "cp.hpp"
#include <vector>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    if ((s1[0] == 'A' && s2[1] == 'D') ||
        (s1[0] == 'D' && s2[1] == 'A') ||
        (s1[1] == 'A' && s2[0] == 'D') ||
        (s1[1] == 'D' && s2[0] == 'A')) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}
