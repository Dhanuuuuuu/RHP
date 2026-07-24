#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> loc(n);
    vector<long long int>vill(n+1,0);

    //location array
    for(int i=0;i<n;i++) cin>>loc[i];

    //villagers prefix sum
    for(int i=1;i<=n;i++){
        cin>>vill[i];
        vill[i]+=vill[i-1];
    }

    int q; cin>>q;

    while(q--){
        int a,b; cin>>a>>b;

        //get the pointers of lower & upper bounds of the range
        auto it1=lower_bound(loc.begin(), loc.end(), a);
        auto it2=upper_bound(loc.begin(), loc.end(), b);

        //convert the pointers to index positions
        int lt=it1-loc.begin();
        int rt=it2-loc.begin();

        //diff btw the upper nd lower index values from villagers Psum
        cout<<vill[rt]-vill[lt]<<endl;
    }

    return 0;

}

//Program link: https://atcoder.jp/contests/abc371/tasks/abc371_d
