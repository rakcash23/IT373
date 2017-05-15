# include <stdio.h>

int main ()
  {
    int i, num=123, sum=0;
    
    for(i=1; i<=4; i++)
    {
       sum=sum+num;
    }
    
    printf("%d\n\r", sum);
    
    return 0;
    
  }