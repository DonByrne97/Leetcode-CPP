class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>output(nums.size()); // We create a new vector with the same size as nums. 
        int product = 1; // Create an integer called product; set it to 1. 
        for(int i = 0; i < nums.size(); i++) // Iterate through the inputted vector. 
        {
            product = product * nums[i]; // Set product equal to itself times the value at nums[i]. 
            output[i] = product; // Create a list of values in output by index equal to product. 
        }
        product = 1; // Reset product to 1. 
        for(int i = nums.size() - 1; i >= 0; i--) // Iterate backwards through nums. 
        {
            if(i == 0) // If i is 0, set it equal to product. 
            {
                output[i] = product; 
            }
            else
            {
                output[i] = output[i - 1] * product; // Set output at i equal to the next lowest index times product.
                product = product * nums[i]; // Set product equal to product times the value at i in nums. 
            }
        }
        return output; // Return the output vector.
    }
};
