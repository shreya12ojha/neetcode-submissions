class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> check;
        if(s.length() != t.length()) return false;
        for(int i = 0 ; i < s.length() ; i++){
            check[s[i]]++;
        }
        for(int i = 0 ; i < t.length() ; i++){
            if(check.find(t[i]) != check.end() && check[t[i]] != 0){
                check[t[i]]--;
            }
        }
        for(auto it : check){
            if(it.second != 0) return false;
        }
        return true;
    }
};
