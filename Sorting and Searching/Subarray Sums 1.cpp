#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int x,left,right,n,i,cnt=0,sum=0;
    scanf("%lld%lld",&n,&x);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    left=0; right=0;
    while(right<n){
        sum=sum+a[right];

        if(sum>x){      //whenever sum exceeds target x we move the left pointer towards right until sum either becomes less than x or equal to x
            while(sum>x){   
                sum=sum-a[left];
                left++;
            }
        }
        if(sum==x)      // we check here if sum is equal to x
            cnt++;
        right++;
    }
    printf("%lld",cnt);
}


