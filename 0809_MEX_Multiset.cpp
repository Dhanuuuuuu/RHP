#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <string>

using namespace std;

int main() {
    int tests;
    cin >> tests;

    while (tests--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        vector<int> zi;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if (arr[i] == 0)
                zi.push_back(i);             //maintaning a separate array to store zero elem ke index
        }

        if (zi.size() == 1) {                //if theres only one zero, then it isnt possible
            cout << "NO" << endl;
            continue;
        }

        string s(n, 'C');                   //intially all elem belong to C, this is done so that at the end C has no 0 elem in it so its MEX would be 0

        if (zi.size() > 0) {                 
            int firstzeroidx = zi[0];         

            s[firstzeroidx] = 'B';             //if theres more than 1 zero then make the first zero's index as set B

            for (int i = 1; i < zi.size(); i++) {   //remaining zeroes go to set A
                int zeroidx = zi[i];
                s[zeroidx] = 'A';
            }
        }

        cout << "YES" << endl;            
        cout << s << endl;
    }

    return 0;
}

//Program link : https://codeforces.com/contest/2259/problem/D
//notes available
