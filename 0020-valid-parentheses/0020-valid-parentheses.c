bool isValid(char* s) {
    
    char stack[10000], ch;
    int top=-1, f1=0,f2=0;

    unsigned int ln=strlen(s);

    if(ln<=1)
    return false;
    
    for(int i=0;i<ln;i++)
    {
        ch = s[i];

        if(ch=='(' || ch=='['||ch=='{')
        {
            f1=1;
            stack[++top]=ch;
        }
        else
        {
            f2=1;
            if(top==-1) return false;

            char inside = stack[top];
            top--;

            if(ch==')' && inside!='(') return false;
            if(ch==']' && inside!='[') return false;
            if(ch=='}' && inside!='{') return false;
        }
    }

  if(top!=-1) return false;
  else return true;
    //return true;
}