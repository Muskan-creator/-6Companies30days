class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        
        unordered_map<int,int> mp;
        
        int n = nums.size();
        if(n & 1) return false;
        
        for(int i=0;i<n;i++){
            mp[nums[i] % k]++;
        }
        
        for(int i=0;i<n;i++){
            
            int rem1 = nums[i] % k;
            
            if(rem1 == 0){
                if(mp[rem1] % 2 != 0) return false;
            }
            else{
                int rem2 = k - rem1;
                if(rem1 == rem2 and mp[rem1] % 2 != 0) return false;
                if(mp.find(rem2) == mp.end()) return false;
                if(mp[rem1] != mp[rem2]) return false;
            }
            
        }
        return true;
    }
};
