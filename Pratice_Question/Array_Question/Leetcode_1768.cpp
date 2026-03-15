class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        string str;

        while (i < word1.length() && j < word2.length()) {
            str.push_back(word1[i]);
            str.push_back(word2[j]);
            i++;
            j++;
        }

        while (i < word1.length()) {
            str.push_back(word1[i]);
            i++;
        }

        while (j < word2.length()) {
            str.push_back(word2[j]);
            j++;
        }

        return str;
    }
};
// https://leetcode.com/problems/merge-strings-alternately/description/