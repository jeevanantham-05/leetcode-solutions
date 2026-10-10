bool isPalindrome(int x) {
    unsigned long long int copy = x;
    unsigned long long rev =0;
    while(copy)
    {
        rev = (rev*10) + (copy%10);
        copy /= 10;
        
    }
    if(x<0)
    return false;
    else if (x == rev)
    return true;
    else
    return false;
    
}