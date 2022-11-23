class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int len = nums.size();
        for(int i=0; i<len-1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                count++;
            }
        }

        if( nums[len-1] > nums[0] )
        {
            count++;
        }

        return count<=1;
    }
};
