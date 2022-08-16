class Solution {
public:
    bool isPalindrome(string s) {
        string str(""); // Create an empty string.
        for(int i = 0; i < s.size(); i++) // Iterate through the inputted string. 
        {
            if(isalnum(s[i])) // If s[i] is alphanumeric 
            {
                str.push_back(tolower(s[i])); // Push the lowercase version of that letter to str. 
            }
        }
        for(int i = 0; i < str.size() / 2; i++) // Iterate through half of the array. 
        {
            if(str[i] != str[str.size() - 1 - i]) // If str[i] does not equal the letter at the opposite end
            {
                return false; 
            }
        }
        return true; 
    }
};
