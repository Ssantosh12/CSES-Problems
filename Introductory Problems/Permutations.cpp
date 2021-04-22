#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,odd,even;
    scanf("%d",&n);
    if(n==2||n==3) printf("NO SOLUTION\n"); //n=1 is also valid permu= 1
    else{
        //two methods that can be used here
        //1.dec order of odds dec order of evens
        //2.inc order of odds inc order of evens
        //type 2 doesnt work for n=4, 1324, type 1 works, 3142, we use here type 2
        if(n&1){
            odd=n;
            even=n-1;
        }
        else{
            even=n;
            odd=n-1;
        }
        for(i=odd;i>=1;i=i-2)
            printf("%d ",i);
        for(i=even;i>=2;i=i-2)
            printf("%d ",i);

    }
}
