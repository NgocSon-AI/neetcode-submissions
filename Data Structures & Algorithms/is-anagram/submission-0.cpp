class Solution {
public:
    bool isAnagram(string s, string t) {
        /* Cách 1: Sort xong so sánh. */
        // if(s.size() != t.size()){
        //     return false;
        // }
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s==t;

        /* Cách 2: Đếm tần xuất ký tự. */
        if(s.size() != t.size()){
            return false;
        }

        vector<int> count(26, 0);
        for(char i : s){
            count[i - 'a']++;
        }
        for(char i : t){
            count[i - 'a']--;
        }
        for(auto i : count){
            if(i != 0){
                return false;
            }
        }
        return true;
    }
};
