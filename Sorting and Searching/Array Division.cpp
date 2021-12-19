
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    long long int cnt,n,k,low=1e9,high=0,mid,mx=1,i,sum;
    scanf("%lld%lld",&n,&k);
    long long int a[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        low=min(low,a[i]);
        high=high+a[i];
    }
    while(low<high){
        mid=low+(high-low)/2;
        //at this mid point we count the no of subarrays having sum less than equal to mid and count such subarrays
        cnt=0;
        sum=0;
        for(i=0;i<n;i++){
            sum=sum+a[i];
            if(sum>mid){
                cnt++;
                sum=a[i];
            }
            if(i==(n-1))
                cnt++;
        }
        if(cnt<k)
            high=mid-1;     //if no of subarrays less ,than answer is not possible at mid but should be possible at lower than it
        else if(cnt==k)     //if cnt==k then maybe mid is the answer and that's why we do not discard it but move to its left part placing high pointer exactly on mid
            high=mid;
        else low=mid+1;   //if no of subarrays greater, than answer is not possible at mid but should be possible at higher than it
    }
    sum=0;
 
    for(i=0;i<n;i++){
        sum=sum+a[i];
        if(sum>low){
            mx=max(mx,sum-a[i]);
            sum=a[i];
        }
        if(i==(n-1))
            mx=max(mx,sum);
    }
    cout<<mx;
}
