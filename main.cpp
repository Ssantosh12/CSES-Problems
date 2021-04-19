#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int left,right,n,m,i,sum=0,cnt=0;
        scanf("%d%d",&m,&n);
        vector<int> vc(n),vcsort;
        for(i=0;i<n;i++)
            scanf("%d",&vc[i]);
        vcsort=vc;
        sort(vcsort.begin(),vcsort.end());
        left=0; right=n-1;
        while(left<right){
            sum=vcsort[left]+vcsort[right];
            if(sum==m){
                left=vcsort[left];
                right=vcsort[right];
                break;
            }
            else if(sum>m) right--;
            else left++;
        }
        for(i=0;i<n;i++){
            if(vc[i]==left){
                left=i+1;

            }
        }
        for(i=0;i<n;i++){
            if(vc[i]==right&&(i!=left-1)){
                right=i+1;

            }
        }
        if(left<right) printf("%d %d\n",left,right);
        else printf("%d %d\n",right,left);
    }
}
