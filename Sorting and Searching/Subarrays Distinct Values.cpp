#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int x,left,right,n,i,cnt=0;
    scanf("%lld%lld",&n,&x);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    left=0; right=0;
    map<int,int> mp;
    while(right<n){
        mp[a[right]]++;

        if(mp.size()>x){
            while(mp.size()>x){
                mp[a[left]]--;
                if(mp[a[left]]==0)
                    mp.erase(a[left]);
                left++;
            }
        }
        if(mp.size()<=x)
            cnt=cnt+(right-left)+1;  //The main idea is change the answer at each point rather than changing it at every breaking points
                                     // if we have counted subarrays at breaking points by this formula n*(n+1)/2, then some subarrays are overcounted in each valid interval
                                     // so at each valid index we increase the no. of subarrays by adding subarrays ending at that ith index (sum=sum+n) n=r-l
        right++
    }
    printf("%lld",cnt);
}


