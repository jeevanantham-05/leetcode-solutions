int mySqrt(int x) 
{
    if(x == 0 || x == 1)
    return x;

    unsigned int root = 0;
    unsigned long int high = x;
    unsigned long int low = 1;
    unsigned long int mid = 0;

    while(low<=high)
    {
        mid = (low+high)/2;

       unsigned long long int sqr = mid * mid;

        if(sqr == x)
        return mid;
        else if( sqr < x)
        {
            root = mid;
            low = mid +1;
        }
        else{
            high = mid -1;
        }

    }
    return root;


    


    
}