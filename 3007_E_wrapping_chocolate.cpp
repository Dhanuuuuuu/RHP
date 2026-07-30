#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    vector<pair<int,int>> ch(n+1), bo(m+1); 
    vector<int> a(n+1), b(n+1);
    vector<int> c(m+1), d(m+1);
    multiset<int> par;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
        ch[i]={a[i], b[i]};
    }

    for(int i=1;i<=m;i++){
        cin>>c[i];
    }
    for(int i=1;i<=m;i++){
        cin>>d[i];
        bo[i]={c[i], d[i]};
    }

    sort(ch.begin() + 1, ch.end(), greater<>());
    sort(bo.begin() + 1, bo.end(), greater<>());
    int bi=1;

    for(int i=1;i<=n;i++){
        while(bi<=m && ch[i].first<=bo[bi].first){
            par.insert(bo[bi].second);
            bi++;
        }
        auto it = par.lower_bound(ch[i].second);
        if(it!=par.end()) par.erase(it);
        else{
            cout<<"No";
            return 0;
        }
    }

    cout<<"Yes";




}
