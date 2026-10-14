int myAtoi(char* s) {
    int i = 0, n = strlen(s);
    long long sum = 0;
    int sign = 1;


    while(i < n && s[i] == ' ') i++;


    if(i < n && (s[i] == '+' || s[i] == '-')) {
        if(s[i] == '-') sign = -1;
        i++;
    }


    while(i < n && s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

       
        if(sum > INT_MAX/10 || (sum == INT_MAX/10 && digit > 7)) {
            return sign == 1? INT_MAX : INT_MIN;
        }

        sum = sum*10 + digit;
        i++;
    }

    return (int)(sum * sign);
}