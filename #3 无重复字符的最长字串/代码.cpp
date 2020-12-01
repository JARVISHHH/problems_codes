// 滑动窗口

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> window;
        int max = 0, head = 0;
        for(int i = 0; i < s.length(); ++i)
        {
            if(window.count(s[i]) > 0 && window[s[i]] >= head)
            {    
                max = max > i - head ? max : i - head ;
                head = window[s[i]] + 1;
            }
            window[s[i]] = i;
        }
        max = max > s.length() - head ? max : s.length() - head;
        return max;
    }
};
