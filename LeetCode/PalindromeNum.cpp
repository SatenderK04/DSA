class Solution
{
public:
    bool isPalindrome(int x)
    {
        long rev_x = 0;
        long org_x = x;
        if (x < 0)
            return false;
        else
        {
            while (x != 0)
            {
                int rem = x % 10;
                rev_x = rev_x * 10 + rem;
                x /= 10;
            }
            if (org_x == rev_x)
                return true;
            else
                return false;
        }
    }
};