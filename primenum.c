#include<stdio.h>
#include<conio.h>
int main()
{
int n, a = 2;
printf("Enter a number:\n");
scanf("%d",&n);
for (a = 2;a<=n-1;a++ )
{
if(n%a==0)
{
printf("%d is a not prime\n", n);
break;
}
}
if(a==n)
printf("%d is prime.\n", n);
return 0;
}
