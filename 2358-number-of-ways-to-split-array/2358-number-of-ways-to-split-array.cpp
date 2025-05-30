class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum = 0;

        for(auto it : nums){
            sum += it;
        }

        int n = nums.size();
        int count = 0;
        long long prevsum = nums[n-1];

        for(int i = n-1;i>0;i--){
            long long rem = sum - prevsum;
            if(rem >= prevsum) count++;
            prevsum += nums[i-1];
        }

        return count;
    }
};