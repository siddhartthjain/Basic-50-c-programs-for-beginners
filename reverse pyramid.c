#include<stdio.h>

int main()
{
int i,j,n;
  printf("no. of lines");
  scanf("%d",n);
for(i=1;i<=n;i++)
{
for(j=4;j>=i;j--)
{printf("*");}
printf("\n");
}
}
