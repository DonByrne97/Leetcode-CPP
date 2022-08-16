class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> map; 
        
        for(int i = 0; i < nums.size(); i++) 
        {
            if(map.count(nums[i]))
            {
                return true; 
            }
            else
            {
                map[nums[i]] = true; 
            }
        }
        return false; 
    }
};
