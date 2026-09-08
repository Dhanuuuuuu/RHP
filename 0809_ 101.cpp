#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>

using namespace std;

int main() {
    int tests; cin>>tests;
    
    while(tests--){
    
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    for(int i=0;i<n;i++){             //breaking the loop when we find out the first 1 or -1 from left
        if(a[i]==1 || a[i]==-1){
            a[i]=1;
            break;
        }
    }
    
    for(int i=n-1;i>=0;i--){         //breaking the loop when we find out the first 1 or -1 from right
        if(a[i]==1 || a[i]==-1){
            a[i]=1;
            break;
        }
    }
    
    for(int i=0;i<n;i++){            //we've changed the extreme ends as 1, now in between -1s r changed to 0
        if(a[i]==-1) a[i]=0;
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";    
    cout<<endl;
    
    }
}


//Program link : https://codeforces.com/contest/2259/problem/C
