bool isPowerOfFour(int n) {

    if(n<=0) return false;
    else if(n==1) return true;

    unsigned long long int sum =1;
    while(sum<n)
    {
        sum = sum *4;
    }

    if(sum==n)
    return true;
    else
    return false;
    
}