#pragma once
// 競プロ用の共通ヘッダー。main.cpp から #include "cp.hpp" で読む。
// 提出時は cpsubmit がこの中身を main.cpp に埋め込んだファイルを送る。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) (x).begin(), (x).end()
template <class T> bool chmin(T& a, const T& b) { return b < a ? (a = b, true) : false; }
template <class T> bool chmax(T& a, const T& b) { return a < b ? (a = b, true) : false; }
// 入出力の高速化。main() が始まる前に実行される
static const struct FastIO { FastIO() { cin.tie(nullptr); ios::sync_with_stdio(false); } } fast_io_;
