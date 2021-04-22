#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,miss=1;
    scanf("%d",&n);
    int a[n-1];
    for(i=0;i<n-1;i++)
        scanf("%d",&a[i]);
    sort(a,a+(n-1));
    for(i=0;i<n-1;i++){
        if(a[i]!=miss)
            break;
        miss++;
    }
    printf("%d\n",miss);
}
