class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        for elements in range(1, len(nums), 1):
            nums[elements] = nums[elements - 1] + nums[elements]
        return nums            