#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a;
    cin >> a;

    unordered_map<int, int> al;
    al[0] = -1;   // cumulative sum, index

    int csum = 0, maxl = 0;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '1')
            csum += 1;
        else
            csum -= 1;

        if (al.find(csum) != al.end()) {
            maxl = max(maxl, i - al[csum]);
        } else {
            al[csum] = i;
        }
    }

    cout << maxl;

    return 0;
}
