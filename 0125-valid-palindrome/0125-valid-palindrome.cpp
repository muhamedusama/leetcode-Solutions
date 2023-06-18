class Solution {
public:
    bool isPalindrome(string s) {
        string palindrome;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9')
            { 
                palindrome+=tolower(s[i]);
            }
               
        }
        int j=palindrome.length()-1;
        for (int i=0;i<palindrome.length();i++)
        {
            if (palindrome[i] != palindrome[j])
                    return false;
            j--;
        }
        return true;
    }
};