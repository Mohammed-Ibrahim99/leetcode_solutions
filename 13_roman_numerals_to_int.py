class Solution:
    def romanToInt(self, s: str) -> int:
        
        value = 0

        for elements in range(len(list(s))):
            match s[elements]:
                case "I":
                    value+=1

                case "V":
                    if((s[elements - 1] == 'I') and (elements - 1>0)):
                        value+=3
                    else:
                        value+=5    

                case "X":
                    if((s[elements - 1] == 'I') and (elements - 1>0)):
                        value+=8
                    else:
                        value+=10   

                case "L":
                    if((s[elements - 1] == 'X') and (elements - 1>0)):
                        value+=30
                    else:
                        value+=50

                case "C":
                    if((s[elements - 1] == 'X') and (elements - 1>0)):
                        value+=80
                    else:
                        value+=100

                case "D":
                    if((s[elements - 1] == 'C') and (elements - 1>0)):
                        value+=300
                    else:
                        value+=500                                

                case "M":
                    if((s[elements - 1] == 'C') and (elements - 1>0)):
                        value+=800
                    else:
                        value+=1000               
        return value