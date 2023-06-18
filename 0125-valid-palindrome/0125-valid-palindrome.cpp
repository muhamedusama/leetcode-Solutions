class Solution {
public:
    bool isPalindrome(string s) {
        string palindrome;
        stack<int>st;
        for (int i=0;i<s.length();i++)
        {
            //cout<<s[i]<<endl;
            if (s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9')
            { 
                //cout<<s[i]<<endl;
                palindrome+=tolower(s[i]);
               // cout<<palindrome;
                st.push(tolower(s[i]));
            }
             
        }
        //cout<<palindrome;
        for (int i=0;i<palindrome.length();i++)
        {
            if (palindrome[i] != st.top())
                    return false;
            st.pop();
        }
        return true;
    }
};