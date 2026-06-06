#include <iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int L = s.length();

    // Reverse loop
    for (int ctr = (1 << L) - 1; ctr >= 0; ctr--) {

        string combo = "";

        for (int sh = 0; sh < L; sh++) {

            if ((ctr & (1 << sh)) != 0) {
                combo += s[sh];
            }
        }

        cout << combo << endl;
    }
}

int main() {
    solve();
    return 0;
}
