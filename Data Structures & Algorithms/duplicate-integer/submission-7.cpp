class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        /*Cách 1: Sử dụng sort()*/
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};