char* countAndSay(int n) {
	if(n == 1)
	{
		char *sayS = (char *)calloc(2, sizeof(char));
		sayS[0] = '1';
		return sayS;
	}
	else
	{
		char *s = countAndSay(n - 1);
		int sLen = strlen(s); 
		char *sayS = (char *)calloc(2 * sLen , sizeof(char));
		int i ;
		int j = 0;
		int k = 0;
		for(i = 0; i < sLen;)
		{
			for(j = i; s[i] == s[j];j++);
				sayS[k] = (char)(j - i) + '0';
				sayS[k + 1] = s[i];
				i = j;
				j = 0;
				k += 2;
		}
		sayS = (char *)realloc(sayS,  (k + 1) * sizeof(char));
		sayS[k] = '\0';
		free(s);
		return sayS;
	}
}
