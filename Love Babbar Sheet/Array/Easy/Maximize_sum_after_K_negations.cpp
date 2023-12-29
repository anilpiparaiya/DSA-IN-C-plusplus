
class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k){
       sort(a,a+n);
       int i=0;
       
       while(k){
           if(a[i]>=0)
               break;
           a[i] = -1 * a[i];
           i++;
           k--;
       }
       
       if(k){
           sort(a,a+n);
           a[0] = pow(-1,k)*a[0];
       }
       
       long long sum=0;
       
       
       for(int i=0;i<n;i++)
           sum+=a[i];
       
       return sum;
   }
};
