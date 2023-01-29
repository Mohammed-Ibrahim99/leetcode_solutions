int romanToInt(char * s)
{
    int value=0;
    int count=0; 
    char roman_numerals[8] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};

	for(int i=0;s[i]!='\0';i++) count++; //Counting no. of letters in the word 
 
	for(int i=0;i<count;i++)	//i is the index of character 
		switch(s[i])
        {
            case 'I':
                value+=1;
                break;
            
            case 'V':
                if((i-1>0)&&(s[i-1] == 'I'))
                {
                    value+=4;
                    value+=-1;
                }
                else{value+=5;}
                break;
            
            case 'X':
                if((i-1>0)&&(s[i-1] == 'I'))
                {
                    value+=9;
                    value+=-1;
                }
                else{value+=10;}
                break;
            
            case 'L':
                if((i-1>0)&&(s[i-1] == 'X'))
                {
                    value+=40;
                    value+=-10;
                }
                else {value+=50;}
                break;
            
            case 'C':
                if((i-1>0)&&(s[i-1] == 'X'))
                {
                    value+=90;
                    value+=-10;
                }
                else{value+=100;}
                break;

            case 'D':
            if((i-1>0)&&(s[i-1] == 'C'))
                {
                    value+=400;
                    value+=-100;
                }
                else{value+=500;}
                break;  

            case 'M':
            if((i-1>0)&&(s[i-1] == 'C'))
                {
                    value+=900;
                    value+=-100;
                }
                else{value+=1000;}
                break;
        }

    return value;
}