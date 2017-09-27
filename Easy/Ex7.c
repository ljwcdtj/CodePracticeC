int reverse(int x) {
    long long llTemp = 0;
    int nLimit = 0x7FFFFFFF;

    _Bool bIsPos = 1;
    int nLength = 0;
    long long llCache = 1;
    int i;
    
    if(x == 1 || x == -1) return x;
    
    if(x < 0)
    {
        bIsPos = 0;
        x = -x;
    }
    
    if(x == 0) return x;
    
    while(llCache < x)
    {
        llCache = llCache * 10;
        nLength++;
    }
    
    if(llCache == x) 
	{
		if(bIsPos)
        return 1;
    	else return-1;
	}
	
	llCache = llCache / 10;
    
    for(i = 0; i < nLength; i++)
    {
        llTemp += (pow(10, i) * (x / llCache));
        x = x - (x / llCache) * pow(10, nLength - 1 - i);
        llCache = llCache / 10;
    }
    
    if(llTemp > (long long)nLimit)
        return 0;
    else if(bIsPos)
        return (int)llTemp;
    else return (int)-llTemp;
}
