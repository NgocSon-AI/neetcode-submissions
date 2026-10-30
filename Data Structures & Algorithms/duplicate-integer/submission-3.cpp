class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        /*
            Cách 1: Sắp xếp: O(nlogn)
        */

        // sort(nums.begin(), nums.end());
        // for(int i = 1; i < nums.size(); i++){
        //     if(nums[i] == nums[i-1]){
        //         return true;
        //     }
        // }
        // return false;

        /*
            Cách 2: Sử dụng unordered_set: O(n)
        */
        unordered_set<int> check;
        for(int num : nums){
            if(check.count(num)){
                return true;
            }
            check.insert(num);
        }
        return false;
    }
};