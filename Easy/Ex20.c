bool isValid(char* s) {
    if(s == NULL)
        return true;
    
    int length = strlen(s);
    if(length == 0)
        return true;
    char * stack = (char *)calloc(2 * length , sizeof(char));
    char * bottom = stack + length;
    char * top = stack + length;
    
    int i = 0;
    
    for(i = 0; i < length; i++)
    {
        char ch = s[i];
        //check stack
        if(*top == ch)
        {
            top++;
            continue;
        }
         
        //push stack
        switch(ch)
        {
            case '(':  top--; *top = ')'; break;
            case '[':  top--; *top = ']'; break;
            case '{':  top--; *top = '}'; break;
            case ')':  free(stack); return false; break;
            case ']':  free(stack); return false; break;
            case '}':  free(stack); return false; break;
                
            default:break;
        }
    }
    
    if(top == bottom)
    {
        free(stack);
        return true;
    }
    else 
    {
        free(stack);
        return false;
    }
}
