class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n=len(nums)
        result=[1]*n
        product=1
        for i in range(len(nums)):
            result[i]=product
            product*=nums[i]
        s=1
        for i in range(n-1,-1,-1):
            result[i]*=s
            s*=nums[i]
        return result
