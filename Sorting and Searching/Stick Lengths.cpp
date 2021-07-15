#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,ele;
    long long int cost=0; // most beneficial is to convert each element into the middle element of the sorted array (learnt from a good problem in Hackwithinfy)
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    ele=a[n/2];
    for(i=0;i<n;i++){
        cost=cost+abs(ele-a[i]);
    }

    printf("%lld\n",cost);
}
