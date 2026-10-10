bool isPowerOfTwo(int n) {
    if(n==1)
    return true;
    else if(n<=0)
    return false;
     
    unsigned long int x=2;

    while(x<n)
    {
        x = x*2;
    }
    
    if(x==n)
    return true;
    else 
    return false;

    
}