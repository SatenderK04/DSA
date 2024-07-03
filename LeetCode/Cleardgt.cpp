class Solution {
public:
    std::string clearDigits(std::string s) {
        for (int i = 0; i < s.length(); ) {
            if (isdigit(s[i])) {
                if (i > 0 && !isdigit(s[i-1])) {
                    s.erase(i-1, 2);  
                    i -= 1;
                } else {
                    s.erase(i);
                }
            } else {
                i++;
            }
        }
        return s;
    }
};