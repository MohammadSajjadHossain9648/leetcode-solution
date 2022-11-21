class Solution {
public:
    bool isPalindrome(string s) {
        //first, make whole string in lowercase.
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        //second, delete all non-character from string
        int j=0;
        string s1;
        for(int i=0; i<s.size(); i++)
        {
            if(isalnum(s[i]))
            {
                s1.push_back(s[i]);
            }
        }

        //third, check if the string is a palindrome or not
        int start = 0, end = j-1;
        while(start < end)
        {
            if(s[start] != s[end])
            {
                return false;
            }
            start++, end--;
        }

        return true;
    }
};
