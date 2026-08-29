class Solution {
public:
    string reverseVowels(string str) {
        string word = str;
        int start = 0;
        int end = str.length() - 1;
        string vowels = "aeiouAEIOU";
    
        while (start < end) {
            while (start < end && vowels.find(word[start]) == string::npos) {
                start++;
            }
            while (start < end && vowels.find(word[end]) == string::npos) {
                end--;
            }
            swap(word[start], word[end]);
            start++;
            end--;
        }
        return word;
    }
};