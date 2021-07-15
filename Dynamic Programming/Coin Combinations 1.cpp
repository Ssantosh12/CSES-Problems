#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n,i,j ;
    scanf("%d%d",&n,&x);
    int a[n];
    vector<int> ways(x+1,0);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    //here we can use the concept of no of ways of reaching nth step problem
    ways[0]=1;
    //we will use tabulation method to calculate no ways we can reach each step
    for(i=1;i<=x;i++){
        for(j=0;j<n;j++){
            if((i-a[j])>=0){
                ways[i]=(ways[i]+ways[(i-a[j])])%1000000007; //use modulo carefully
            }
        }
    }

    printf("%d\n",ways[x]);
}
