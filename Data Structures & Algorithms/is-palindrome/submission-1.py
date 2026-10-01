class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=''.join(c.lower() for c in s if c.isalnum())
        r=s[::-1]
        if (s==r):
             return True

        return False 