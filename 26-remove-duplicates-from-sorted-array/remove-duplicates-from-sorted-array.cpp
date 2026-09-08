class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j,i=0;
        int n = nums.size();
        for( j = 1 ; j < n; j++)
        {
            if(nums[i]!=nums[j])
            {
                nums[++i]=nums[j];
            }
        }
        return i+1;
    }
};