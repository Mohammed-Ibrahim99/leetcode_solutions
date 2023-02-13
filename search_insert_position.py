class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        try:
            return nums.index(target)
        except ValueError:
            index = 0
            for numbers in range(len(nums)):
                if target>=nums[numbers]:
                    index = numbers + 1
            return index