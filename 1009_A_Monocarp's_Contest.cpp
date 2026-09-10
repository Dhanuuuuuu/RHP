#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tests;
    cin >> tests;

    while (tests--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int zeros = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0)
                zeros++;
        }

        // Both ends are already easy
        if (a[0] == 0 && a[n - 1] == 0) {
            cout << 0 << '\n';
        }
        // Not enough easy problems
        else if (zeros < 2) {
            cout << -1 << '\n';
        }
        // Exactly one end is easy
        else if (a[0] == 0 || a[n - 1] == 0) {
            cout << 1 << '\n';
        }
        // Both ends are hard
        else {
            cout << 2 << '\n';
        }
    }

    return 0;
}
