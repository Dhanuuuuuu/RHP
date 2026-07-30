#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n,q;
    string s;
    cin>>n>>q;
    cin>>s;
    int pos=n-1;

    while(q--){
        int t,x;
        cin>>t>>x;
        x=x%n;


        if(t==1){
            pos=pos-x;
            if(pos<0) pos+=n;
        }else{
            cout<<s[(pos+x)%n]<<endl;
        }
    }


    return 0;
}

//instead of modifiying the string which is time taking, we just change the 
//beginnning position of string
