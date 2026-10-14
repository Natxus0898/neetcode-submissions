class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false; 
        
        int arr[26] = {0};
        int i;
        for (i = 0; i < s.length(); i++) {
            arr[s[i] - (int)'a']++;
        }
        
        int j;
        for (j = 0; j < t.length(); j++) {
            arr[t[j] - (int)'a']--; 
            if (arr[t[j] - (int)'a'] < 0) {
                return false;
            } 
        }
        return true;
    }
};
