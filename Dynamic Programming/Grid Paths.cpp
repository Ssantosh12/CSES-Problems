#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int n,i,j;
    scanf("%lld",&n);
    vector<string> vc; //dont't initialise like this ' vector<string> vc(n) '
    string s;
    for(i=0;i<n;i++){
        cin>>s;
        vc.push_back(s);
    }
 
    vector<vector<long long int>> mat(n,vector<long long int> (n,0));
    if(vc[0][0]!='*')
      mat[0][0]=1;
    for(j=1;j<n&&mat[0][j-1]!=0;j++){
        if(vc[0][j]!='*')
            mat[0][j]=1;
    }
    for(i=1;i<n&&mat[i-1][0]!=0;i++){
        if(vc[i][0]!='*')
            mat[i][0]=1;
    }
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            //each cell can be reached from two cells (upper one and left cell)
          
            if(vc[i][j]!='*')
                mat[i][j]=(mat[i-1][j]+mat[i][j-1])%1000000007;
 
        }
    }
    printf("%lld\n",mat[n-1][n-1]);
    
}
