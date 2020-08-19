class Solution:
    def toGoatLatin(self, S: str) -> str:
        lst=S.split()
        ans="";
        vowels=['a','e','i','o','u','A','E','I','O','U']
        for i in range(len(lst)):
            if lst[i][0] in vowels:
                ans+=" "+lst[i]+"ma"
            else:
                ans+=" "+lst[i][1:]+lst[i][0]+"ma"
            for j in range(i+1):
                    ans+='a'
        return ans[1:]
