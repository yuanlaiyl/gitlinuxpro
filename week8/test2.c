#include<stdio.h>
#include<malloc.h>
void print(char *,int);
int main()
{
   char *s1="abcde";
   char *s2="abcde";
   char s3[]="abcd";
   long int *s4[100];
   char *s5="abcde";
   int a=5;
   int b=6;

   printf("variables address in main function:  s1=%p   s2=%p   s3=%p   s4=%p   s5=%p   a=%p   b=%p  \n",s1,s2,s3,s4,s5,&a,&b);
   printf("variables address in processcall:n");
   print("ddddddddd",5);
   printf("main=%p  print=%p  \n",main,print);
}

void print(char *str,int p)
{
   char *s1="abcde";
   char *s2="abcde";
   char s3[]="abcdeee";
   long int *s4[100];
   char *s5="abcde";
   int a=5;
   int b=6;
   int c;
   int d;
   char *q=str;
   int m=p;
   char *r=(char *)malloc(1);
   char *w=(char *)malloc(1);
   
   printf("s1=%p   s2=%p   s3=%p   s4=%p   s5=%p   a=%p   b=%p   c=%p   d=%p   str=%p   q=%p   p=%p   m=%p   r=%p   w=%p  \n",s1,s2,s3,s4,s5,&a,&b,&c,&d,&str,q,&p,&m,r,w);
}
