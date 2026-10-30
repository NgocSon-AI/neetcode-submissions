class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        /*Cách 1: O(n^2)*/
        // int n = nums.size();
        // for(int i = 0; i < n-1; i++){
        //     for(int j = i+1; j < n; j++){
        //         if(nums[i] == nums[j]){
        //             return true;
        //         }
        //     }
        // }   
        // return false;
        /*Cách 2: O(nlogn)*/
        // sort(nums.begin(), nums.end());
        // for(int i = 0; i < nums.size()-1; i++){
        //     if(nums[i] == nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;
        /*Cách 3: O(n)*/
        unordered_set<int> seen;
        for(auto i:nums){
            if(seen.count(i)){
                return true;
            }
            seen.insert(i);
        }
        return false;
    }
};