#include<stdio.h>
#include<conio.h>
void main()
{
int r,n,sum=0,rev=0,temp;
clrscr();
printf("OUTPUT\n");
printf("Enter value for n");
scanf("%d",&n);
temp=n;
while(n!=0)
{
r=n%10;
sum=sum+r;
rev=rev*10+r;
n=n/10;
}
printf("rev=%d\n",rev);
printf("sum=%d\n",sum);
if(temp==rev)
printf("\n%d is palindrome",temp);
else
printf("\n%d is not palindrome", temp);
getch();
}