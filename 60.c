#include<stdio.h>
#include<conio.h>
void main()
{
int f=o,s=1,c,i,n;
printf("enter ther num");
scanf("%d",&n);
printf("valuue is %d\n%d\n,f,s);
for(i=2;i<=n;i++)
{
c=f+s;
f=s;
s=c;
printf("%d\n",c);
}
}
