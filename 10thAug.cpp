class Solution {
public:
    int titleToNumber(string s) {
        int ans=0,j=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            ans+=(s[i]-'A'+1)*pow(26,j++);
        }
        return ans;
    }
};
