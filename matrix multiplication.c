#include<stdio.h>
int main()
{
 int a[20][20],b[20][20],c[20][20],m,n,i,j;
 printf("Enter the size of matices:\n");
 scanf("%d%d",&m,&n);
 printf("Enter the value of A matrix:\n");
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 scanf("%d",&a[i][j]);
 }
 }
 printf("Enter the value of B matrix:\n");
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 scanf("%d",&b[i][j]);
 }
 }
 printf("Sum of two matrices:\n");
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 c[i][j]=a[i][j]+b[i][j];
 printf("%d\t",c[i][j]);
 }
 printf("\n");
 }
}