#include <iostream>
#include <vector>
using namespace std;
#define ll long long int

long long int solve(ll x, ll y, ll k){
    ll ans=0,ctr=0;
    while(ctr<k){
        ll rem=(y+ctr)%(x+ctr);
        if(rem==y-x) break;
        ans+=rem; ctr++;
    }
    
    if(k>ctr) ans+=(k-ctr)*(y-x);
    return ans;
}

int main() {
    int tests; cin>>tests;
    while(tests--){
        long long int x,y,k; cin>>x>>y>>k;
        long long int a = solve(x,y,k);
        cout<<a<<endl;
    }
    
    return 0;
}
