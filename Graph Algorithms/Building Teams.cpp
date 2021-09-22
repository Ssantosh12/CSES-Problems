#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,e,i,u,v,cnd=1;
    scanf("%d%d",&n,&e);
    vector<vector<int>> adj(n);
    for(i=0;i<e;i++){
        scanf("%d%d",&u,&v);
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    //the problem is same as coloring a graph bipartite
    //we will use bfs traversal to check if we make the graph bipartite
    queue<int> q;
    vector<int> colour(n,-1); //here we will use colour array as visited array, there are two colours 1 and 2, initially all nodes are assigned -1
    for(i=0;i<n;i++){
      if(colour[i]==-1){
       q.push(i);
       colour[i]=1;
       while(!q.empty()){
         for(auto x: adj[q.front()]){  //we check all the neighbouring nodes of the current node
            if(colour[x]!=-1){
              if(colour[x]==colour[q.front()]){
                cnd=0;
                break;
              }
            }
            else{
                q.push(x);
                if(colour[q.front()]==1)
                    colour[x]=2;
                else colour[x]=1;
            }
         }
         if(cnd==0)
            break;
         q.pop();
        }
        if(cnd==0)
            break;
      }
    }
    if(cnd==1){
        for(i=0;i<n;i++)
            cout<<colour[i]<<" ";
        cout<<"\n";
    }
    else printf("IMPOSSIBLE\n");
 
}
