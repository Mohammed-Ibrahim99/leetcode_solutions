class Solution:
    def isValid(self, s: str) -> bool:
        valid = False
        for bracket in range(len(s)):
            if s[bracket] is '(':
                if s[bracket + 1] is ')':
                    valid = True
            if s[bracket] is '[':
                if s[bracket + 1] is ']':
                    valid = True        
            if s[bracket] is '{':
                if s[bracket + 1] is '}':
                    valid = True
        return valid         