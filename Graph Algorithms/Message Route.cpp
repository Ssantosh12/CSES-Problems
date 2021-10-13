#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,e,i,node,u,v;
    scanf("%d%d",&n,&e);
    vector<vector<int>> adj(n);
    vector<bool> visited(n,false);
    vector<pair<int,int>> parent(n,{-1,-1}); //it will store the depth and parent of each node
    for(i=0;i<e;i++){
        scanf("%d%d",&u,&v);
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    //we are going to use bfs to find the minimum distance from source node to target node
    queue<int> q;
    q.push(0);
    visited[0]=true;
    parent[0].first=0;
    while(!q.empty()){
        //q.front is the parent
        for(auto x : adj[q.front()]){
            if(visited[x]==false){
                parent[x].first=parent[q.front()].first+1;
                parent[x].second=q.front();
                visited[x]=true;
                q.push(x);
            }
        }
        q.pop();
    }
    //now we have stored the depth and parent information of each node from the starting node (i.e 0) in parent array/vector
    if(parent[n-1].second==-1)
        printf("IMPOSSIBLE");
    else{
        printf("%d\n",parent[n-1].first+1);
        vector<int> path;
        node=n-1;
        while(node!=0){
            path.push_back(node);
            node=parent[node].second;
        }
        path.push_back(0);
        for(i=path.size()-1;i>=0;i--)
            cout<<path[i]+1<<" ";
    }

}
