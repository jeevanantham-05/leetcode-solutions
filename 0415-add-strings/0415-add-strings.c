char* addStrings(char* num1, char* num2) {
    int i = strlen(num1) - 1; 
    int j = strlen(num2) - 1; 
    int carry = 0;

    
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int max = len1 > len2? len1 : len2;
    char* ans = (char*)malloc(max + 2);
    int k = 0; 

    while(i >= 0 || j >= 0 || carry!= 0) {
        int a = 0, b = 0;

        if(i >= 0) {
            a = num1[i] - '0'; 
            i--;
        }
        if(j >= 0) {
            b = num2[j] - '0';
            j--;
        }

        int sum = a + b + carry;
        ans[k] = (sum % 10) + '0'; 
        k++;
        carry = sum / 10;
    }

    ans[k] = '\0';


    for(int l = 0, r = k - 1; l < r; l++, r--) {
        char temp = ans[l];
        ans[l] = ans[r];
        ans[r] = temp;
    }

    return ans;
}