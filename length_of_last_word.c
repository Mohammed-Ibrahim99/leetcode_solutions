//A quick optimisation would be && instead of % as 32 is 2 to the power of 5
int lengthOfLastWord(char * s)
{
    if (strlen(s) == 1)
    {
        if(s[0]%32 != 0) return 1;

        else
        {
            return 0;
        }
    }
    
    int length = 0;
    int last_index = strlen(s) - 1;

    //Find occurence of first space character next to letter
    //and store in last_index
    //Space character is denoted by 32 from ASCII table
    for(int i = strlen(s)-1; i>0; --i)
    {
        if(s[i] % 32 == 0) continue;
        else
        {
            last_index = i;
            break;
        }
        
    }

    //Start counting from last_index up till another space is found
    //from last space to first space
    for(int i = last_index; i>=0; --i)
    {
        if(s[i] % 32 == 0) break;
        
        else
        {
            length++;
        }

    }

    printf("\n%d %d", length, last_index);
    if(length == 0) length++;
    return length;

}