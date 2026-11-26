#include<stdio.h>
int main()
{
int a [50], b[10][10];
int n, rows, cols;
inti,j,sum1, sum2;
sum1=0
sum2=0
printf("Entre the number od elements in1D array:");
scanf("%d",&n);
printf("Entre%d elements:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n1D Array Elements:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]
sum1=sum1+a[i];
{
printf("\nSum od 1D Array=%d",sum1);
printf("\n\nEntre the number od rows in 2D array:");
scanf("%d",&rows);
printf("Entre the number of colums in 2D array:.");
scanf("%d",&cols);
printf("Entre the elements od 2D array:\n");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\n2D Array Elements:\n");
for(i=0;i<rows; i++)
{
fir(j=0;j< cols;j++)
{
printf("%d\t",b[i][j]);
sum2=sum2+b[i][j];
}
printf("\n");
}
printf("Sum od 2D Array=%d",sum2);
return 0;
}
