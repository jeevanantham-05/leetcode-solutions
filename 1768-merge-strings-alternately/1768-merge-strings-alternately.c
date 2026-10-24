

char * mergeAlternately(char * word1, char * word2){
    unsigned int w1 = strlen(word1), w2 = strlen(word2), indx=0, backup = 0, ln=0;

    char *merge = malloc(1*w1+w2+1);

    unsigned int l1=0,l2=0;

    if(w1>w2)
    {
        ln=w2;
        l1=1;
    }
    else
    {
        ln=w1;
        l2=1;
    }


    for(int i=0;i<ln;i++)
    {  
        backup =i;

        merge[indx++]=word1[i];
        
        merge[indx++] = word2[i];
    }

    ++backup;

    if(l1)
    {
        while(backup!=w1)
        merge[indx++] = word1[backup++];
    }
    else
    {
        while(backup!=w2)
        merge[indx++] = word2[backup++];
    }

    merge[indx]='\0';

    return merge;

}