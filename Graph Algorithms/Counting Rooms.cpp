#include <bits/stdc++.h>

using namespace std;

void dfs(int i,int j, vector<vector<char>> &adj,int n, int m){
    if(i<0||i>(n-1)||j<0||j>(m-1)||adj[i][j]!='.')
        return;
    adj[i][j]='#';
    //now we call dfs on its 4 neighbouring nodes
    dfs(i,j-1,adj,n,m);
    dfs(i,j+1,adj,n,m);
    dfs(i-1,j,adj,n,m);
    dfs(i+1,j,adj,n,m);
}

int main()
{
    int n,m,i,j,cnt=0;
    scanf("%d%d",&n,&m);
    vector<vector<char>> adj(n,vector<char> (m));
    char c;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>c;
            adj[i][j]=c;
        }
    }
    //we just count the no. of connected components by using the given matrix as both the adjacency list and visited array
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(adj[i][j]=='.'){
                dfs(i,j,adj,n,m);
                cnt++;
            }
        }
    }

    printf("%d\n",cnt);
}
