class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        s={}

        for i in range (len(nums)):
             need =target-nums[i]
             if need in s:
                return [s[need],i]
             s[nums[i]]=i;
             