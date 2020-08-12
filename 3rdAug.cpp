class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string res="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]<='z'&&s[i]>='a') || (s[i]<='Z'&&s[i]>='A') || (s[i]<='9'&&s[i]>='0'))
                res+=s[i];
        }
        s=res;
        reverse(res.rbegin(),res.rend());
        if(res==s)
            return true;
        return false;
    }
};
