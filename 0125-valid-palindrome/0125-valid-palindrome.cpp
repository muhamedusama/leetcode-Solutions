class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string result;
    for(int i=0;i<n;i++)
    {
        if (s[i]>='a' &&s[i]<='z' || s[i]>='A' &&s[i]<='Z' || s[i]>='0' &&s[i]<='9' )
        {
            
            result+=tolower(s[i]);
        }
    }
        int n2=result.length();
        int last=n2-1;
        if (n2%2==0)
        n2=n2/2;
        else if (n2%2==1)
            n2=(n2/2)+1;
        
       // result.tolower();
         for(int i=0;i<n2;i++)
    {
       if (result[i]!=result[last])
           return false;
        last--;
       
    }
        return true;
    }
};