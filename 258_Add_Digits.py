class Solution:
    def addDigits(self, num: int) -> int:

        val = num
        addval = 0
        if(len(str(num)) == 1): 
            return num

        while val > 0:           
            addval = addval + val%10
            val = int(val/10)


        if len(str(addval)) >= 2:
            return self.addDigits(addval)
        else:
            return addval