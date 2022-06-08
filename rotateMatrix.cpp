#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
 int i=0;

   while(n-2*i>1&&m-2*i>1){

        int t=mat[i][i];

        for(int j=i+1;j<n-i;j++)

            mat[j-1][i]=mat[j][i];

        

        for(int j=i+1;j<m-i;j++)

            mat[n-1-i][j-1]=mat[n-1-i][j];

        

        for(int j=n-1-i;j>i;j--)

            mat[j][m-1-i]=mat[j-1][m-1-i];

        

        for(int j=m-1-i;j>i;j--)

         mat[i][j]=mat[i][j-1];

        mat[i][i+1]=t;

        

        i++;
    }
}