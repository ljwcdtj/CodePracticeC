int romanToInt(char* s) {
    int sum = 0;
    int num = 0;
    int numnext = 0;
    while(*(s + 1) != '\0')
    {
        switch(*s)
        {
            case 'I': num = 1; break;
            case 'V': num = 5; break;
            case 'X': num = 10; break;
            case 'L': num = 50; break;
            case 'C': num = 100; break;
            case 'D': num = 500; break;
            case 'M': num = 1000; break;
        }
        
        switch(*(s + 1))
        {
            case 'I': numnext = 1; break;
            case 'V': numnext = 5; break;
            case 'X': numnext = 10; break;
            case 'L': numnext = 50; break;
            case 'C': numnext = 100; break;
            case 'D': numnext = 500; break;
            case 'M': numnext = 1000; break;
        }
               
        if(numnext > num)
            num = -num;
        sum += num;
        
        s = s + 1;
    }
    
    switch(*s)
    {
        case 'I': num = 1; break;
        case 'V': num = 5; break;
        case 'X': num = 10; break;
        case 'L': num = 50; break;
        case 'C': num = 100; break;
        case 'D': num = 500; break;
        case 'M': num = 1000; break;
    }
    
    if(numnext > num)
            num = -num;
        sum += num;
    
    return sum;
}
