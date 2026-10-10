int lengthOfLastWord(char* s) 
{
    char *token = strtok(s," ");
    char *last_word = NULL;

    while(token != NULL)
    {
        last_word = token;
        token = strtok(NULL, " ");
    }

    unsigned int len = strlen(last_word);
    return len;

}