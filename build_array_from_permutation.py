class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:

        return [nums[nums[elements]] for elements in range(len(nums))]