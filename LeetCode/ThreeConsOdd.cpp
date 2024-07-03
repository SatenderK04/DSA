#include <vector>;
class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        int x = 0;
        for (int i = 0; i < size(arr); i++)
        {
            if (arr[i] % 2 != 0)
            {
                x++;
                if (x == 3)
                    break;
            }
            else
            {
                x = 0;
            }
        }
        if (x == 3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};