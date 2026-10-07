class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        seen = {0 : 1 }
        subcnt = 0
        prefixsum = 0
        for i in nums:
            prefixsum +=i
            req = prefixsum -k
            if req in seen:
                subcnt += seen[req]
            seen[prefixsum] = seen.get(prefixsum,0)+1
        return subcnt        
        