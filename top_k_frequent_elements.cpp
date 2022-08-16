class Solution {
public:
    static bool comp(pair<int,int> a, pair<int,int> b) { // Create a new boolean function that returns true if a.second is larger than b.second.
    return a.second > b.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> solutionVector; // Create a new empty vector.
        unordered_map<int,int> map; // Create a new unordered map of type <int, int>. 
        for(int i=0;i<nums.size();i++)
        { // Iterate through the inputted vector. 
            map[nums[i]]++; // If we encounter nums[i], increase its value by 1. 
        }
        vector<pair<int,int>> pairs(map.begin(),map.end()); // Create a new vector of type <pair<int,int>> which copies the contents of the unordered map.
        sort(pairs.begin(),pairs.end(),comp); // Sort the vector using our boolean function as a rule. 
        for(auto &ele:pairs)
        { // Iterate through the sorted vector. 
            if(k>0)
            { // Determine if k is greater than 0. 
                solutionVector.push_back(ele.first); // Add the element's key to the vector. 
            }
            k--; // Decrement k. 
        }
    return solutionVector; // Return the vector as the solution. It should contain keys with their number of appearances in descending order. 
    }
};
