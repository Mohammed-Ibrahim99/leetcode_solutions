class Solution:
    def myPow(self, x: float, n: int) -> float:

        val = x
        count = 1
        steps = 0

        if n == 0:
            return 1
        if x == 1:
            return 1
        if x == -1 and n % 2 == 0:
            return 1
        if x == -1 and n % 2 == 1:
            return -1
        if n == -2147483648:
            return 0
        if n == 2147483647:
            return 0

        if n > 0:
            steps = n
        else:
            steps = -n

        while count < steps:
            val = val * x
            count = count + 1

        if n < 0:
            val = 1 / val

        return val