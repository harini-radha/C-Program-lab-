#include<stido.h>
int square(int n);
int factorial (in n);
int main()
{
int,n res, fact;
printf("Entre a nimber:")
scanf("%d",&n);
res=square(n);
fact=factorial(n);
printf("\nSquare of%d=%d",n,res
printf("\nFactorial of%d=%d,n,fact);
return0;
}
int square(int n)
{
int res;
res=n*n;
return res;
}
int factorial( int n)
{
int rea;
if(n=0||n=1)
{
return 1;
}
else 
{
res=n*factorial(n-1);
return res;
}
}
output
Entre a number:5
Square of 5=25
Factorial if 5= 120
