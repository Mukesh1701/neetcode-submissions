class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp={}
        for i in nums:
            mp[i]=mp.get(i,0)+1
        sorted_n=sorted(mp,key=mp.get,reverse=True)
        return sorted_n[:k]