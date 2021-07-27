#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s,i,j,mn;
    scanf("%d%d",&n,&s);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    //problem can thought as the same problem of reaching nth stair in minimum jumps
    //think of all the possible ways to reach ith stair/sum (using jump/ coin) , out of those we choose the minimum one
    vector<int> coin(s+1,-1);
    coin[0]=0;
    for(i=1;i<=s;i++){
        mn=INT_MAX;
        for(j=0;j<n;j++){
            if((i-a[j])>=0&&coin[(i-a[j])]!=-1)
                mn=min(mn,coin[i-a[j]]);
        }
        if(mn!=INT_MAX)
            coin[i]=mn+1;
    }
    printf("%d\n",coin[s]);
}
