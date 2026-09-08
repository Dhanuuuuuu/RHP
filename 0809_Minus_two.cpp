#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>

using namespace std;

int main() {
    int tests;
    cin >> tests;

    while (tests--) {
        int size;
        cin >> size;

        vector<int> nums(size);

        int odd = 0, eoq = 0, eeq = 0;

        for (int i = 0; i < size; i++) {
            int a;
            cin >> a;

            nums[i] = a;

            if (a % 2 == 1)
                odd++;
            else if ((a/2)%2== 0)
                eeq++;
            else
                eoq++;
        }

        cout << max(odd, max(eoq, eeq)) << '\n';
    }



  https://codeforces.com/contest/2259/problem/A

    return 0;
}
