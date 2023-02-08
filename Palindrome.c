bool isPalindrome(int x)
{   
    if(x<0)
    {
        return false;
    }

    int val = x;
    int size = 0;
    
    while(val/10 != 0)
    {
        size++;
        val = val/10;
    }

    ++size;
    
    int first_element = x % 10;
    int val_array[size];
    val_array[0] = first_element;

    for(int i = 1; i<size; i++)
    {
        val_array[i] = (int) (x /  pow(10, i)) % 10;
    }

    int compare = sizeof(val_array)/sizeof(val_array[0]) - 1;
    int count = 0;

    while(count != compare)
    {   

        if(val_array[count] == val_array[compare])
        {
            if(compare - 1 == count)
            {
                return true;
            }
            count++;
            compare--;
        }
        else
        {
            return false;
        }
    }
       
    
    return true;
}