class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        /*
            Cách 1: Sort( O(nlogn)
        */
        // sort(nums.begin(), nums.end());
        // for(int i=1; i<nums.size(); i++){
        //     if(nums[i] == nums[i-1]){
        //         return true;
        //     }
        // }        
        // return false;

        /*
            Cách 2: Unordered_map
        */
        unordered_map<int, int> v;
        for(int x : nums){
            if(v.count(x)){
                return true;
            }
            v[x]=1;
        }
        return false;
    }
};