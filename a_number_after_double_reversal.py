class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        if num == 0:
            return True
        if str(num)[-1] == '0':
            return False
            
        reversed1 = str(num)[::-1]
        reversed2 = int(reversed1[::-1])

        if reversed2 == num:
            return True

        return False