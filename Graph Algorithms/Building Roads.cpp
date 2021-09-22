#include <bits/stdc++.h>

using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited){
      if(visited[node])
        return;
      visited[node]=true;
      for(auto x : adj[node])
        dfs(x,adj,visited);
}

int main()
{
    int n,e,i,j,u,v,cnt=0;
    scanf("%d%d",&n,&e);
    vector<vector<int>> adj(n);
    for(i=0;i<e;i++){
        scanf("%d%d",&u,&v);
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    vector<bool> visited(n,false);
    vector<int> vc;
    //now we run dfs
    for(i=0;i<n;i++){
        if(visited[i]==false){   //that means there is a new component starting from this node
            vc.push_back(i);
            dfs(i,adj,visited);
            cnt++;
        }
    }
    cout<<cnt-1<<endl;
    for(i=0;i<vc.size()-1;i++)
        printf("%d %d\n",vc[i]+1,vc[i+1]+1);
}
