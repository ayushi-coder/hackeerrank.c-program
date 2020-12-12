#include<stdio.h>
void main()
{
int n,i,r=0,j=0,k;
printf("Enter the decimal value");
scanf("%d",&n);
for(i=n;i!=0;i=i/2)
{
r=(i%2)+(r*10);
}
printf("%d", r);
for(k=r;k!=0;k=k/10)
{
j=(j*10)+(k%10);

}
printf("Binary value=%d",j);
}

