class Solution {
  public:
    int largestSubsquare(int n, vector<vector<char>> a) {
       vector<vector<int>>bottom(n+1,vector<int>(n+1,0)),right(n+1,vector<int>(n+1,0));
    //   right
      for(int i=0;i<n;i++){
          for(int j=n-1;j>=0;j--){
              if(a[i][j]=='X'){
                  right[i][j]=right[i][j+1]+1;
              }
          }
      }
       
    //   bottom
      for(int j=0;j<n;j++){
          for(int i=n-1;i>=0;i--){
              if(a[i][j]=='X'){
                  bottom[i][j]=bottom[i+1][j]+1;
              }
          }
      }
       int ans=0;
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              int len = min(right[i][j],bottom[i][j]);
              while(len>0){
                  int x1=i;
                  int y1=j+len-1;
                  int x2=i+len-1;
                  int y2=j;
                  if(min(bottom[x1][y1],right[x2][y2])>=len){
                      ans=max(ans,len);
                      break;
                  }else len--;
              }
          }
      }
       return ans;
   
    }
};
 

