#include <bits/stdc++.h>
using namespace std;

int main(){
    int cub,n,i,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    multiset<int> mst; //it will contain the top of each tower
    multiset<int>::iterator it;
    for(i=0;i<n;i++){             // for each cube we have two options add it to one of the present toers or start a new tower
                                  //we add this cube to the tower which has top just greater than it
        cub=a[i];              
        it=mst.upper_bound(cub);
        if(it!=mst.end()){
            mst.erase(it);
            mst.insert(cub);
        }
        else{
            cnt++;
            mst.insert(cub);
        }
    }
    printf("%d\n",cnt);
}
