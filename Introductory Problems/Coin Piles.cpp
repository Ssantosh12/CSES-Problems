#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int diff,a,b,mn,tim;
        scanf("%d%d",&a,&b);
        string ans="NO";
      
        //first we make a and b equal and after becoming equal if a%3==0 (a and b are same) then YES
       // 'diff' times we reduce 2 from bigger one and 1 from smaller one to make them equal (ex. 7 4->diff=3->(7-6) & (4-3)-> 1 1) 
        if(a>b){
            diff=a-b;
            if(diff<=b){
                b=b-diff;
                a=a-(2*diff);
                if(a%3==0)
                    ans="YES";
            }
        }
        else{
            diff=b-a;
            if(diff<=a){
                a=a-diff;
                b=b-(2*diff);
                if(a%3==0)
                    ans="YES";
            }
        }
        cout<<ans<<"\n";
    }
}
