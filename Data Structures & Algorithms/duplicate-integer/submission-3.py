class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        mp={}
        for n in nums:
            mp[n]=mp.get(n,0)+1;
        
        for n1 in mp.values():
            if(n1>1):
                return True;
        return False;
