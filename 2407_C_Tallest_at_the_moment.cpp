#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    vector<pair<int,int>> a;

    //store all the pairs first
    while(n--){
        int ht,lvt; cin>>ht>>lvt;
        a.push_back({ht,lvt});
    }

    //sort them in descending order
    sort(a.begin(),a.end(),greater<pair<int, int>>());

    vector<int> height,time;
    int till=0;

    //
    for(auto[ht,lvt]:a){
        if(lvt<=till) continue;
        till=lvt;
        time.push_back(lvt);
        height.push_back(ht);
    }

    int num; cin>>num;
    while(num--){
        int query; cin>>query;
        auto it=upper_bound(time.begin(), time.end(), query);
        int it1=it-time.begin();
        cout<<height[it1]<<endl;
    }

    return 0;
}

//Program link : https://atcoder.jp/contests/abc463/tasks/abc463_c
