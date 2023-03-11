class Solution:
    def isHappy(self, n: int) -> bool:
        if n < 7 and n != 1:
            return False
        if n == 1:
           return True

        val = n
        square_digits_sum = 0

        while val > 0:
            square_digits_sum = square_digits_sum + ((val%10) * (val%10))
            val = int(val/10)
              
        return self.isHappy(square_digits_sum)