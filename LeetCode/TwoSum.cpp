#include <vector>;
using namespace std;

class Solution
{
public:
    vector<int> twoSum(std::vector<int> &nums, int target)
    {
        int length = nums.size();
        for (int i = 0; i < length - 1; ++i)
        {
            for (int j = i + 1; j < length; ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {}; // Return an empty vector if no solution is found
    }
};