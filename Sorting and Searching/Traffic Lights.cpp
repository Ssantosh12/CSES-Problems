#include <bits/stdc++.h>

using namespace std;

int main()
{                         //Using POWER of STL
    int ele,n,x,i;
    scanf("%d%d",&x,&n);
    set<int> st;               // set will contain the points at which we put the traffic lights and boundary points (0 and x)
    set<int>::iterator left,right;  
    st.insert(0);
    st.insert(x);
    map<int,int> mp;  //map will store the frquencies of all available lengths
    mp[x]=1;
    for(i=0;i<n;i++){
        scanf("%d",&ele);
        left=st.lower_bound(ele);
        left--;
        right=st.lower_bound(ele);
        mp[*right-*left]--;
        if(mp[*right-*left]==0)
            mp.erase(*right-*left);
        mp[*right-ele]++;
        mp[ele-*left]++;
        st.insert(ele);
        cout<<mp.rbegin()->first<<" ";
    }
}
