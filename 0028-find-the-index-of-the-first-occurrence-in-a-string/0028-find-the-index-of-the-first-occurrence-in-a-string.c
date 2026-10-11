int strStr(char* haystack, char* needle)
{
    char *occur = strstr(haystack, needle);

    int ln = strlen(haystack);
    int ln2 = strlen(needle);
    printf("%s \n",occur);
    if(occur)
    {
        for(int i=0;i<ln;i++)
        {
            int c=i;
            int sum=0;
            for(int j=0;j<ln2;j++)
            {
                if(haystack[c]==needle[j])
                {
                    c++;
                    sum++;
                }
                else break;
            }

            if(sum == ln2)
            {
                return (c-ln2);
            }
        }
        return -1;
    }
    else
    {
        return -1;
    }
    
}