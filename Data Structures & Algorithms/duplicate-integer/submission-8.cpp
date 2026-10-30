class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        /* Cách 1: Sử dụng sort()*/
        /*
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
        */

        /* Cách 2: Sử dụng unordered_map */
        unordered_map<int, int> v;
        for(auto i : nums){
            if(v[i] > 0){
                return true;
            }
            else{
                v[i]++;
            }
        }
        return false;
    }
};