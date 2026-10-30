class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> new_nums(n*2);
        for(int i = 0; i < n; i++){
            new_nums[i] = new_nums[i+n] = nums[i];
        }
        return new_nums;
    }
};