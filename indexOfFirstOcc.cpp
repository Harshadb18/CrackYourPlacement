class Solution {
public:
    int strStr(string h, string n) {
        if(h.size() < n.size())
        {
            return -1;
        }

        for(int i = 0; i <= h.size() - n.size(); i++)
        {
            if(h.substr(i, n.size()) == n)
            {
                return i;
            }
        }

        return -1;
    }
};
