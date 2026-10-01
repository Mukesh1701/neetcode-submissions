class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0
        count=1
        laarge=1
        sorted_n=sorted(nums)
        for i in range (0,len(nums)-1):
             if(sorted_n[i]==sorted_n[i+1]):
                continue
             if ( sorted_n[i+1]==sorted_n[i]+1):
                count=count+1
                laarge=max(count,laarge)
             else:
                count=1
        return laarge