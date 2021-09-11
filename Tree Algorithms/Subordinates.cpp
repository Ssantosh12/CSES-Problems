#include <bits/stdc++.h>
using namespace std;

int rec(int node,vector<vector<int>> &adj,vector<int> &vc){
    if(adj[node].empty()){
        vc[node]=0;
        return 0;
    }
    int cnt=0;
    for(auto x : adj[node]){
        cnt=cnt+1+rec(x,adj,vc); //for each child we add 1 to the cnt and ask each child to count their children (most useful recursive thinking )
    }
    vc[node]=cnt;
}

int main(){
    int i,j,n,cnt,e;
    scanf("%d",&n);
    //we will create the adjacency list for tree where children nodes are stored in a row for each node
    vector<vector<int>> adj(n);
    for(i=1;i<n;i++){
        scanf("%d",&e);
        adj[e-1].push_back(i);
    }
    vector<int> vc(n); //this vector will contain the no of subordinate nodes(nodes below it) for a particular node
    rec(0,adj,vc);
    for(i=0;i<n;i++)
        cout<<vc[i]<<" ";
}
