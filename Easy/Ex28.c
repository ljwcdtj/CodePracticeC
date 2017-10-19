int strStr(char* haystack, char* needle) {
    int haystacklen = strlen(haystack);
    int needlelen = strlen(needle);
    
    if(needlelen > haystacklen)
        return -1;
    if(needlelen == 0)
        return 0;
    
    int i, j;
    int size = haystacklen - needlelen + 1;
    //int flag = 0;
    

    for(i = 0; i < size; i++)
    {
        bool isOK = true;
        for(j = 0; j < needlelen; j++)
        {            
            if(needle[j] != haystack[i + j])
            {
                isOK = false;
                break;
            }
        }
        if(isOK)
            return i;
    }
    
    return -1;    
}
