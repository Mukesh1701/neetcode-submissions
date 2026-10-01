class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        s={}
        for ii in range(0,len(nums)):
            more=target-nums[ii]
            if more in s:
                return [s[more]+1,ii+1]
            s[nums[ii]]=ii
        return []
            