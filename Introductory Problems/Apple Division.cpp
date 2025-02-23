#include <bits/stdc++.h>
using namespace std;
 
// Pattern: we can put a subsequence in one group and the subsequence which is left can be put in another group
// and for each element we have choices, of putting it into 1st or the 2nd group
// state definition: minimum difference between two groups with weights grp1Weight and grp2Weight
// upto the subproblem ith (that is the subproblem prefix upto the ith index)
long long int minDiffBetwTwoGroupsUptoIth(long long int index, long long int arr[], long long int grp1Weight, long long int grp2Weight){
    // base case
    if(index==-1)
        return llabs(grp1Weight-grp2Weight);
 
    // transition: we have a choice of putting current element in 1st group or 2nd
    // from both choices, we choose the one which gives the min difference between two groups
    return min(minDiffBetwTwoGroupsUptoIth(index-1,arr,grp1Weight+arr[index],grp2Weight), minDiffBetwTwoGroupsUptoIth(index-1,arr,grp1Weight,grp2Weight+arr[index]));
}
 
int main() {
    long long int i,n;
    scanf("%lld",&n);
    long long int arr[n];
    for(i=0;i<=n-1;i++)
        scanf("%lld",&arr[i]);
 
    cout<<minDiffBetwTwoGroupsUptoIth(n-1,arr,0,0);
}

// OLD Solution
/*
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
*/
