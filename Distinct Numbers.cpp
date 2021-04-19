#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt=1,n,i,prv;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    prv=a[0];
    for(i=1;i<n;i++){
        if(a[i]!=prv){
            cnt++;
            prv=a[i];
        }
    }
    printf("%d\n",cnt);
}
