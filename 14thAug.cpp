class Solution {
public:
    int longestPalindrome(string s) {
        int cnt[52]={0},ans=0,flag=1;
        for(char ch:s)
        {
            if(ch>=97)
                cnt[ch-'a']++;
            else
                cnt[26+ch-'A']++;
        }
        for(int i=0;i<52;i++)
        {
            if(cnt[i]%2!=0 && flag==1)
            {
                flag=0;
                ans++;
            }
            if(cnt[i]%2==0)
            {
                ans+=cnt[i];
            }
            if(cnt[i]%2!=0)
                ans+=cnt[i]-1;
        }
        return ans;
    }
};
