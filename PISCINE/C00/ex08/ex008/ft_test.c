#include <stdio.h>
#include<unistd.h>

void combn(int n, const char* s)
{
  if(n==0){
	  write(1, &%s, s);
      write(1, " ", 1);
	  return;
  } 
  for(int i=0;i<=9;i++)
  {      
      char x[11];
      sprintf(x, "%s%i",s, i);
      combn(i+1,n-1, x);
  }
}

void ft_print_combn(int n)
{
    if (n>=1 && n<=10)
      combn(n, "");
}

int main ()
{
    ft_print_combn(2);
}
