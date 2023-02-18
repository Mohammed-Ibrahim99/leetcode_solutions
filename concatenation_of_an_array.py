class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        return [nums[elements - len(nums)] for elements in range(len(nums) * 2)]