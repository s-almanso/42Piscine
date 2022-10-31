#include <stdio.h>
#include <unistd.h>

void combn(int start, int n, const char* s)
{
  if (n==0)
  {
      write(1, s, n);
      return;
  } 
  for(int i=start;i<=9;i++){      
      char s2[11];
      sprintf(s2, "%s%i",s, i);
      combn(i+1,n-1, s2);
  }
}

void ft_print_combn(int n)
{
    if (n>=1 && n<=10)
      combn(0,n,"");
}

int main (int argc, char* args[])
{
    ft_print_combn(3);
}
