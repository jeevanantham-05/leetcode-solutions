bool isPowerOfThree(int n) {

    if(n<=0)
    return false;
    unsigned long long int sum=1;
    while(sum<n)
    {
        sum=sum*3;
    }
    if(sum==n)
    return true;
    else 
    return false;
    
}