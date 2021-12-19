#include <bits/stdc++.h>
 
using namespace std;  

 //recursive solution where we take sum of each subset 
 
void mndiff(long long int ind,long long int a[],long long int &tsum,long long int sub,long long int &diff,long long int &n){
    if(ind==n)
        return ;
    diff=min(diff,llabs((tsum-sub)-sub));
    mndiff(ind+1,a,tsum,sub+a[ind],diff,n);
    mndiff(ind+1,a,tsum,sub,diff,n);
}
 
int main()
{
    long long int sub=0,tsum=0,n,i,diff=2e10;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        tsum=tsum+a[i];
    }
    mndiff(0,a,tsum,sub,diff,n);
    cout<<diff<<endl;
}
