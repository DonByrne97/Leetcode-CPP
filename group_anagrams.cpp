class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer; // Create a vector which contains string vectors. 
        map<string, vector<string>> anagrams; // Create a map with strings as the keys and string vectors as the values. 
        for(const auto& str: strs) // Iterate through the inputted string vector. 
        {
            string tempString = str; // Create a tempString value which holds the value of "str." 
            sort(tempString.begin(), tempString.end()); // Sort tempString alphabetically. 
            anagrams[tempString].push_back(str); // Create a new entry in the map with tempString as the key and "str" as the value. 
        }
        for(const auto& word: anagrams) // Iterate through the anagrams map. 
        {
            answer.push_back(word.second); // Get the value of word and add it to the answer vector.
        }
        return answer; 
    }
};
