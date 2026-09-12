class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
                vector<int> b;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int rem = target - nums[i];
            auto a = find(nums.begin()+i+1,nums.end(),rem);
            if(a!=nums.end())
            {
            b.push_back(i);
            b.push_back(a-nums.begin());
            return b;
            }
        }
        return b;
    }
};