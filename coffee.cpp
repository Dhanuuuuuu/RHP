#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int m = 200000;

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> d(m + 2, 0);

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }

    vector<int> p(m + 1, 0);

    int c = 0;
    for (int i = 1; i <= m; i++) {
        c += d[i];
        if (c >= k)
            p[i] = p[i - 1] + 1;
        else
            p[i] = p[i - 1];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << p[b] - p[a - 1] << '\n';
    }

    return 0;
}
