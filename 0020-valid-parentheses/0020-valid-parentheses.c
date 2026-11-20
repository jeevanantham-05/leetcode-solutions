bool isValid(char* s) {
    
    char stack[10000], ch;
    int top=-1;

    unsigned int ln=strlen(s);

    if(ln<=1)
    return false;
    
    for(int i=0;i<ln;i++)
    {
        ch = s[i];

        if(ch=='(' || ch=='['||ch=='{')
        {
            
            stack[++top]=ch;
        }
        else
        {
           
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
    
}