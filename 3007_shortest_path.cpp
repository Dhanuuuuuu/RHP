#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

vector<int> bfs(int n, int m, vector<vector<int>> edges, int s) {
    
    map<int, vector<int>> g;
    vector<bool> vis(n+1, false); vector<int> ans(n+1);
    for(int i=0;i<m;i++){
        vector<int> edge=edges[i];
        int a=edge[0],  b=edge[1];
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    
    queue<pair<int, int>> q;
    q.push(make_pair(s,0));
    vis[s]=true;
    while(!q.empty()){
        auto[cty, ecnt]=q.front(); q.pop();
        for(int othc: g[cty]){
            if(!vis[othc]){
                q.push(make_pair(othc,ecnt+1));
                vis[othc]=true;
                ans[othc]=ecnt+1;
            }
        }
    }
    vector<int> res;
    for(int c=1;c<=n;c++){
        if(c==s) continue;
        if(ans[c]==0) res.push_back(-1);
        else res.push_back(ans[c]*6);
    }
    
    return res;
}
