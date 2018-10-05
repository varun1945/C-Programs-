#include<stdio.h>
long int fact(int n);
int main()
{
int num;
printf("enter number");
scanf("%d",&num);
printf("factorial of numberis %ld" ,fact(num));	
}
long int fact(int num)
{
if(num<=1)
{
return(01);
}
else
{
num=num*fact(num-1);
return(num);	
}
}
