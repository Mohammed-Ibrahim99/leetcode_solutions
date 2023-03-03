bool isSameAfterReversals(int num)
{
    if(num == 0)
    {
        return true;
    }
    
    if(num%10 == 0)
    {
        return false;
    }

    return true;
}

bool isSameAfterReversals(int num)
{
    if(num == 0 || num%10 != 0)
    {
        return true;
    }

    return false;
}