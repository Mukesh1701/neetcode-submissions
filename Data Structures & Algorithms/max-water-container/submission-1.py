class Solution:
    def maxArea(self, heights: List[int]) -> int:
         left=0
         n=len(heights)
         right=n-1
         m=0;
         while(left<right):
            w=right-left
            h=min(heights[left],heights[right])
            a=w*h
            m=max(a,m)
            if heights[left]<heights[right]:
                left+=1
            else:
                 right-=1
         return m