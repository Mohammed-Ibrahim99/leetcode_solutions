class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        # convert number to binary, then into string
        num = str(bin(n))

        # ignore the 0 and b in the beginning
        num = num[2:]

        totalSetBits = 0
        for bit in num:
            totalSetBits = totalSetBits + int(bit) 
            
        return totalSetBits