class Solution:
    def reverse(self, x: int) -> int:
        sign = +1
        if x<0 :
            x= x * -1
            sign = -1
          
        vals = int(str(x)[::-1])
        if vals >= 2147483648:
            ans = 0
        else:
            ans = int(vals) * sign
        return ans