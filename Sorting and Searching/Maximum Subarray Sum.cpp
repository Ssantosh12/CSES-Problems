#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int i,n,sum=0,mx=-INT_MAX;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    //using basic fundamental concept by visualizing an example max sum subarray    
    for(i=0;i<n;i++){
        sum=sum+a[i];
        sum=max(a[i],sum);
        mx=max(sum,mx);
    }
    printf("%lld\n",mx);
}
