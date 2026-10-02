class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        v=nums;
        for i in range (len(nums)):
            v.append(nums[i])
        return v