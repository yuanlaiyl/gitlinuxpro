#include "my.h"
#include <setjmp.h>
static jmp_buf g_stack_env;

static void fun1(int *a,int *b,int *c);

int main(void)
{
   int a=1;
   int b=2;
   int c=3;

   if(0==setjmp(g_stack_env)){
      printf("Nromal flow\n");
      printf("1:a=%d,b=%d,c=%d\n",a,b,c);
      fun1(&a,&b,&c);
   }else{
      printf("Long jump flow\n");
      printf("2:a=%d,b=%d,c=%d\n",a,b,c);
   }
   return 0;
}
static void fun1(int *a,int *b,int *c)
{
   printf("Enter func1\n");
   ++(*a);
   ++(*b);
   ++(*c);
   printf("fun1:a=%d,b=%d,c=%d\n",*a,*b,*c);
   longjmp(g_stack_env,1);
   printf("Leave func1\n");
}

