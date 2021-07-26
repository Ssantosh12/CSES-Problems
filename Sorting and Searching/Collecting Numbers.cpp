#include <bits/stdc++.h>
using namespace std;

int main(){
    int ele,i,n,cnt=1;
    scanf("%d",&n);
    int pos[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&ele);
        pos[ele]=i;
    }
    //since we choose elements from 1 to n , their postions should also be increasing order, if anytime this doesn't happen
    // we will have to start again from left of the array for iterating (that's when we increase the cnt )  
  
    for(i=2;i<=n;i++){
        if(pos[i]<pos[i-1])
            cnt++;
    }
    printf("%d\n",cnt);
}
