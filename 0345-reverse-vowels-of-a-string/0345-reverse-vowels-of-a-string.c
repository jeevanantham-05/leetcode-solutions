char* reverseVowels(char* s) {

    int ln = strlen(s);
    int c=1;
    int i=0,j=ln-c;
    for(i;i<j;i++)
    {
         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'||
             s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            j=ln-c;
            for(j;j>i;j--)
            {
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' 
                || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U')
                {
                    char ch = s[i];
                    s[i]=s[j];
                    s[j]=ch;
                    c++;
                    break;
                }
                c++;
            }
        }
    }

    return s;
    
    
}