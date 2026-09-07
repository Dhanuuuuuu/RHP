#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
 
int main(){
    int test;cin>>test;
    while(test--){
        int n; cin>>n;
        vector<int> nums;
        for(int i=0;i<n;i++){
            int a; cin>>a;
            nums.push_back(a);
        }
        cout<<gcd(nums[0], nums[n-1])<<endl;
    }
}

//program link: https://codeforces.com/problemset/problem/2258/A
