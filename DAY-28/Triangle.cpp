class Solution {
public:

int minimumTotal(vector<vector<int>>& triangle) {
 int n=triangle.size();
 if(n==0) return 0;
 if(n==1) return triangle[0][0];
 int mine=INT_MAX;
 for(int i=1;i<n;i++)
 {
     for(int j=0;j<=i;j++)
     {
       if(j-1>=0&&j<=i-1)
          triangle[i][j]+=min(triangle[i-1][j],triangle[i-1][j-1]);
       else if(j>i-1&&j-1>=0)
           triangle[i][j]+=triangle[i-1][j-1];
       else if(j-1<0)
           triangle[i][j]+=triangle[i-1][j];
       
       if(i==n-1)
           mine=min(mine,triangle[i][j]);
     }
 }
    return mine;
}
};
