#include "cp.hpp"

int main() {
    int a, b;
    cin >> a >> b;
    int ans = a + b;

    int digit = 0;
    while (ans > 0) {
        ans /= 10;
        digit++ ;
    }
    cout << digit << endl;
    
}
