#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,cnt=0,mx=1;
    string s;
    cin>>s;
    char prv;
    prv=s[0];
    //non overlapping segment finding problem
    //can simply be solved using breaking points
    for(i=0;i<s.size();i++){
        if(s[i]==prv){
            cnt++;
            if(i==(s.size()-1)){
                if(cnt>mx)
                    mx=cnt;
            }
        }
        else{
            if(cnt>mx)
                mx=cnt;
            cnt=1;
            prv=s[i];
        }
    }
    printf("%d\n",mx);
}
