int firstUniqChar(char* s) {

    int ln=strlen(s);
    int flag=0;
    for(int i=0;i<ln;i++)
    {
        flag=0;
        for(int j=0;j<ln;j++)
        {
            if(i==j) continue;

            if(s[i]==s[j])
            {
                flag=1;
                break;
            }
        }
        if(!flag) return i;
    }

    return -1;
}