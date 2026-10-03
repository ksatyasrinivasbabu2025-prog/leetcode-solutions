from bisect import bisect_left,bisect_right

class Solution: 
    def searchRange(self,nums: List[int],target: int) -> List[int]:
        first_position=bisect_left(nums,target)
        last_position=bisect_right(nums,target)
        return [first_position,last_position-1] if first_position!=last_position else [-1,-1]
        