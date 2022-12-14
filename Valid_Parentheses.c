bool isValid(char * s)
{
    bool value = false;
    for(int i=0; s[i]!='\0'; i++)
    {
        switch(s[i])
        {
            case '(':
                if(s[i+1] == ')' && s[i+1]!='\0')
                {
                    value = true;
                    i++;
                }
                else
                {
                    value = false;
                }
            break;

            case '[':
                if(s[i+1] == ']' && s[i+1]!='\0')
                {
                    value = true;
                    i++;
                }
                else
                {
                    value = false;
                }
            break;
            case '{':
                if(s[i+1] == '}' && s[i+1]!='\0')
                {

                    value = true;
                    i++;
                }
                
                else
                {
                    value = false;
                }
            break;
        }
    }

return value;
}