#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    scanf("%d",&n);

    //using nth staircase reaching problem concept
    vector<int> ways(n+1,0);
    ways[0]=1;
    for(i=1;i<=n;i++){
        for(j=1;j<7;j++){
            //we check for the valid coins we can take to reach ith state
            if((i-j)>=0)
                ways[i]=(ways[i]+ways[(i-j)])%1000000007;
        }
    }
    printf("%d\n",ways[n] );
}
