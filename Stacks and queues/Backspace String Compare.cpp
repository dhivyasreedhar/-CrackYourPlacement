

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1,s2;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='#')
                s1.push(s[i]);
            else if(s[i]=='#' && !s1.empty())
                s1.pop();
        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]!='#')
                s2.push(t[i]);
            else if(t[i]=='#' && !s2.empty())
                s2.pop();
        }
        
        int x=s1.size(),y=s2.size();
        if(x==y)
        {
            for(int i=0;i<x;i++)
            {if(s1.top()!=s2.top())
                    return false;
            else
            {
                s1.pop();
                s2.pop();
            }}
            
            return true;
            
            
                
        }
        else
            return false;
        
    }
};
