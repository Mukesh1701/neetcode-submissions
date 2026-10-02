class Solution:
    def scoreOfString(self, s: str) -> int:
        p=0
        for i in range(len(s)-1):
             p+=abs(ord(s[i])-ord(s[i+1]))
             
        return p