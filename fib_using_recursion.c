#include <stdio.h>
void fib(int n,int fact){
  //factorial using recursion 
  if(n>0){
    fact=fact*n;
    n--;
    fib(n,fact);
  }
  else
  {
    printf("%d",fact);
  } 
}

int main()
{
   int n,fact=1;
   scanf("%d", &n);
   printf("Fibonacci Series: ");
   fib(n,fact);

   return 0;
}