bool isPalindrome(int x) {
   long long i, j, k;
    if(x == 0)
        return true;
    else if(x < 0)
        return false;
    
  for(i = 0, j = 1; j <= x; i++, j = j * 10);
    j = j / 10;
    
   for(k = 0; k <= i / 2; k++)
   {
      if(x % 10 != x / j)
          return false;
       else
       {
           x = x - (x / j) * j ;
           j = j / 100;
           x = x / 10;
           if(j == 0)
           return true;
       }
   }

  return true;

}
