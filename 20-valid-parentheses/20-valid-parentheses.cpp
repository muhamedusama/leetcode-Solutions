class Solution {
public:
    bool isValid(string s) {
        stack <char> x;
        for (int i=0;i<s.length();i++)
        {
           if (x.empty())
           {
               x.push(s[i]);
               continue;
           }
            
           if (s[i]-1==x.top() || s[i]-2==x.top())
           {cout<<x.top()<<endl;
            x.pop();
            continue;
           }
            x.push(s[i]);
        }
        if (x.empty())
            return true;
        else
            return false;
    }
};