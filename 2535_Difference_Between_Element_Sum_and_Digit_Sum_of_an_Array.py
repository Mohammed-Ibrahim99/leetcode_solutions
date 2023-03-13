class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:
        digitSum = 0
        elementSum = 0

        for i in range(len(nums)):
            elementSum = elementSum + nums[i]
            
            if int(nums[i]/10) == 0:
                digitSum += nums[i];
            
            else:
                val = nums[i]
                while val > 0:
                    digitSum = digitSum + val%10
                    val = int(val/10)


        absolute_sum = digitSum - elementSum
        if absolute_sum > 0:
            return absolute_sum
        else: 
            return -absolute_sum