#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,t,low=1e9,high=1e18,mid,i,cnt;
    scanf("%lld%lld",&n,&t);
    long long int a[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        low=min(low,a[i]);
    }

    while(low<high){
        mid=low+(high-low)/2;
        //we count the no of products that can be produced after 'mid' time has passed
        cnt=0;
        for(i=0;i<n;i++){
            cnt=cnt+mid/a[i];
            if(cnt<0)      //this means cnt has overflowed and it gets reduced to the max value t can have, ie 10^9 (1e9)
                cnt=1e9;
        }
        if(cnt<t)
            low=mid+1;
        else high=mid;
    }
    printf("%lld\n",low);

}
