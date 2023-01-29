class Solution:
    def isValid(self, s: str) -> bool:
        valid = False
        stack = []
        if len(s)%2 == 0:
            for elements in range(len(s)):
                if s[elements] in ['(', '[', '{']:
                    stack.append(s[elements])

                elif (stack and stack[-1] == '(' and s[elements] == ')' ):
                        stack.pop(-1)
                        valid = True
                elif (stack and stack[-1] == '[' and s[elements] == ']'):
                        print(stack)
                        stack.pop(-1)
                        valid = True   
                elif (stack and stack[-1]  == '{' and s[elements] == '}'):
                        
                        stack.pop(-1)
                        valid = True 
                else:
                        valid = False            
            if stack:
                valid = False            


                                  
        return valid            