int romanToInt(char* s) 
{
    int roman[256] = {0};
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int sum = 0;
    int prev = 0;
    int len = strlen(s);

    for (int i = len - 1; i >= 0; i--) {
        int curr = roman[s[i]];
        if (curr < prev) {
            sum -= curr;
        }
        else {
            sum += curr;
        }
        prev = curr;
    }

    return sum;

}
    
