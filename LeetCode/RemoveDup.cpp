class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (size(nums) == 0)
            return 0;
        int x = 0;
        for (int i = 1; i < nums.size();)
        { // not to increment if same element found
            if (nums[i] == nums[i - 1])
            {
                nums.erase(nums.begin() + i);
                x++;
            }
            else
                i++;
        }
        return nums.size();
    }
};
