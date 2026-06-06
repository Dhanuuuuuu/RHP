#include <iostream>
using namespace std;

int main() {
    string text;
    cin >> text;

    int digitMask = 0;

    for (int i = 0; text[i]; i++) {

        if (text[i] >= '0' && text[i] <= '9') {
            digitMask |= (1 << (text[i] - '0'));
        }
    }

    int completeSet = (1 << 10) - 1;

    if (digitMask == completeSet) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
