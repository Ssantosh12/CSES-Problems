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
            //1st breaking point-> if we reach last element
            if(i==(s.size()-1)){
                if(cnt>mx)
                    mx=cnt;
            }
        }
        else{
            //2nd breaking point->continuous same elments chain breaks
            if(cnt>mx)
                mx=cnt;
            cnt=1;
            prv=s[i];
        }
    }
    //in each breaking points we send the prv cnt to check if it fits the requirements and then update the cnt
    printf("%d\n",mx);
}
