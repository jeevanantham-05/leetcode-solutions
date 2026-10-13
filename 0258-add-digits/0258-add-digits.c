int addDigits(int num) {
    if(num<=0) return 0;

    int sum=0;

    while(num)
    {
        sum = sum + (num%10);
        num /= 10;
    }

    if(sum>9)
    return addDigits(sum);

    return sum;
    
}