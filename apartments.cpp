#include <bits/stdc++.h>

using namespace std;

int n, m, k, ans;

void solve() {
    cin >> n >> m >> k;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    ans = 0;

    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= k) {
            ++i;
            ++j;
            ++ans;
        } else {
            if (a[i] - b[j] > k) {
                ++j;
            } else {
                ++i;
            }
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}