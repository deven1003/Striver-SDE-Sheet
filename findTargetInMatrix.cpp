#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >>& mat,int m ,int n, int target) 
{
   if(!mat.size())
   {
       return false;
   }
    m =mat.size();
      if(!m)return false;
    n =mat[0].size();
          if(!n)return false;
    int low=0;
    int high=(n*m)-1;   
    
    while(low<=high){
        int mid=low+(high-low+1)/2;
        if(mat[mid/n][mid%n]==target)
        {
            return true;
        }
        else if(mat[mid/n][mid%n]<target)
        {
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return false;   
}