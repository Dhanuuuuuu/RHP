#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        vector<vector<int>> pos(100001);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]].push_back(i);
        }

        cout << "Case " << tc << ":\n";

        while (q--) {
            int type;
            cin >> type;

            if (type == 1) {
                int x, y;
                cin >> x >> y;

                if (x == y) continue;

                for (int i : pos[x]) {
                    a[i] = y;
                    pos[y].push_back(i);
                }

                pos[x].clear();
            }
            else {
                int idx;
                cin >> idx;
                cout << a[idx - 1] << '\n';
            }
        }
    }

    return 0;
}
