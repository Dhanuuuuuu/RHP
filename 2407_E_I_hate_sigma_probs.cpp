#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n), prev(n+1,0);
    for(int i=0;i<n;i++) cin>>a[i];
    long long int sum=0,last=0;

    //n-i is the position from the end
    //prev is initialized to 0 at first nd slowly gets updated to n-i
    for(int i=n-1;i>=0;i--){
        last-=prev[a[i]];
        prev[a[i]]=n-i;
        last+=prev[a[i]];
        sum+=last;
    }

    cout<<sum<<endl;


    return 0;
}

//program link : https://atcoder.jp/contests/abc371/tasks/abc371_e
