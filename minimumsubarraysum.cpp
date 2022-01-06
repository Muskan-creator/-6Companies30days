class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        long long sum=0;
        int min_size=INT_MAX;
        for(int n: nums) {
            
            sum += n;

            while (sum >= target) {
                min_size = min(min_size, j - i + 1);
                sum -= nums[i++];
            }

            ++j;
        }

        return min_size == INT_MAX ? 0 : min_size;
    }
};
