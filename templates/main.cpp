#include <bits/stdc++.h>
using namespace std;

// ---- 型 ----
using ll = long long;            // 10^9 を超える値は ll
using P = pair<ll, ll>;

// ---- ループ ----
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)          // 0 .. n-1
#define rep2(i, a, b) for (int i = (a); i < (int)(b); ++i)    // a .. b-1
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)    // n-1 .. 0

// ---- 範囲 (sort(all(v)) のように使う) ----
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()   // 降順ソートなど

// ---- 最小/最大の更新。更新できたら true ----
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return true; } return false; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return true; } return false; }

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);


}
