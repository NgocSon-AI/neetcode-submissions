class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /* Cách 1: O(n^2)*/
        // for(int i = 0; i < nums.size()-1; i++){
        //     for(int j = i+1; j < nums.size(); j++){
        //         if(target == nums[i] + nums[j]){
        //             return {i, j};
        //         }
        //     }
        // }

        /* Cách 2: Sorting - O(nlon) */
        // vector<pair<int, int>> a;
        // for(int i = 0; i < nums.size(); i++){
        //     a.push_back({nums[i], i});
        // }

        // sort(a.begin(), a.end());

        // int i = 0;
        // int j = nums.size() - 1;
        // while(i < j){
        //     int calc = a[i].first + a[j].first;
        //     if(calc == target){
        //         return {min(a[i].second, a[j].second),
        //                 max(a[i].second, a[j].second)};
        //     }
        //     else{
        //         if(calc < target){
        //             i++;
        //         }else{
        //             j--;
        //         }
        //     }
        // }
        // return {};

        /* Cách 3: Hash Map O(n)*/
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(m.count(diff) && m[diff] != i){
                return {i, m[diff]};
            }
        }
        return {};
    }
};
