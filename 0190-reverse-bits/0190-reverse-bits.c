int reverseBits(int n) {
    
    int size = 31;
    unsigned int fresh =0;
    int m=0;
    for(int i=31; i>=0; i--)
    {
        unsigned int first =((n>>i) & 1U);
        
        unsigned int mask = (1U<<m);

        if(first)
        fresh = fresh | mask;
       
        m++;

    }
    return fresh;
    
}