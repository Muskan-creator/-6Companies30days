class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i=0;
        int j=0;
         long long int p=1;
         int count=0;
         while(j<n){
             p*=a[j];
             while(i<n&&p>=k){
                 p/=a[i];
                 i++;
             }
             if(p<k){
                 count+=j-i+1;
                 j++;
             }
         }
         return count;
            
        }
    };
