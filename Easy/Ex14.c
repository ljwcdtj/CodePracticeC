char* longestCommonPrefix(char** strs, int strsSize) {
    char *s = "";
    
    //empty
    if(strs == NULL || *strs == NULL)
        return s;
    if(strsSize == 1)
        return *strs;
    int i = 0;
    
    //some empty
    for(i = 0; i < strsSize; i++)
    {
        if(strs[i] == s || strs[i] == NULL)
            return s;
    }
    
    //no empty
    int j;
    bool bJump = false;
    
    for(j = 0; strs[0][j] != '\0';j++)
    {
        char temp = strs[0][j];
        for(i = 0; i < strsSize; i++)
        {
            if(temp != strs[i][j])
            {
                bJump = true;
                break;
            }
        }
        
        if(bJump)
        {
            break;
        }   
    }
    
    if(j == 0)
        return s;
    else
    {
        char *ss = (char *)malloc((j + 1) * sizeof(char));
        memcpy(ss, strs[0], j * sizeof(char));
        ss[j] = '\0';
        return ss;
    }
}
