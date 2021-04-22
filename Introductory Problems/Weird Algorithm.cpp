#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,i;
    scanf("%lld",&n);
    while(n!=1){
        printf("%lld ",n);
        if(n&1)
            n=n*3+1;
        else n=n/2;
    }
    printf("%d\n",n);
}
