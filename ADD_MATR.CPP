#include<stdio.h>
#include<stdio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j;
printf("Enter the elements in array a");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the elements in array b");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("Addition of matrices=");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d  ",c[i][j]);
printf("\n");
}
}
}
