class Solution {
public:

    bool hasEven(int num){
        int length = (num == 0) ? 1 : log10(abs(num)) + 1;
        if(length %2 ==0) return true;
        return false;
    }
    
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto i : nums){
            if(hasEven(i)) count++;
        }
        return count;
    }
};