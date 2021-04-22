#include <bits/stdc++.h>
using namespace std;

int main(){
    //error was coming because not taken long long int
    //1000000000 1 1 1 1 1 1 1 1 1 1 and so on (here moves will exceed int, almost 10^5*10^9)
    long long int i,n,moves=0,diff;
    scanf("%lld",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++){
        if(a[i]<a[i-1]){
            diff=a[i-1]-a[i];
            moves=moves+diff;
            a[i]=a[i-1];
        }
    }
    printf("%lld\n",moves);
}
