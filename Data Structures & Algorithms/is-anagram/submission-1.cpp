class Solution {
public:
    bool isAnagram(string s, string t) {
        /* Cách 1: Sử dụng sort rồi so sánh O(nlog(n)) )*/
        // if(s.length() != t.length()){
        //     return false;
        // }
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;

        /* Cách 2: Sử dụng Hash Map O(n) */
        // if(s.length() != t.length()){
        //     return false;
        // }
        // unordered_map<char, int> countS;
        // unordered_map<char, int> countT;
        // for(int i = 0; i < s.length(); i++){
        //     countS[s[i]]++;
        //     countT[t[i]]++;
        // }
        // return countS == countT;

        /* Cách 3: Sử dụng Hash Table */
        if(s.length() != t.length()){
            return false;
        }
        vector<int> count(26, 0);
        for(int i = 0; i < s.length(); i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for(int val : count){
            if(val != 0){
                return false;
            }
        }
        return true;
    }
};
