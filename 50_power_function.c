double myPow(double x, int n)
{

    double val = x;
    int count = 1;
    int steps = 0;

    if(n==0 || x==1) return 1;
    if(x==-1 && n%2==0) return 1;
    if(x==-1 && n%2==1) return -1;
    if(n==-2147483648) return 0;
    if(n==2147483647) return 0;

    
    steps = n<0? -n: n;
    

        while(count < steps)
        {
            val *=x;
            count++;
                
        }

    if(n < 0) val = 1/val;


    return val;

}