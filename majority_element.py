class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        num_of_elements = list(set(nums))
        count = 0

        print(count)
        value = nums[0]
        for elements in range(len(num_of_elements)):
            if count < nums.count(num_of_elements[elements]):
                print(elements)
                value = num_of_elements[elements]
                count =  nums.count(num_of_elements[elements])

        return value;