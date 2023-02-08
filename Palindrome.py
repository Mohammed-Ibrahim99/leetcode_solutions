class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x<0:
            return False
        
        x_list = [int(i) for i in str(x)]
        
        while(x_list):
            if(x_list[0] == x_list[len(x_list)-1]):
                x_list = x_list[1:-1]
            else:
                return False


        return True