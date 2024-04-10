
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a[100],k,pos;
clrscr();
printf("Enter the number of element:\n");
scanf("%d",&n);
printf("Enter the element for an array:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the searching element:\n");
scanf("%d",&k);
pos=-1;
for(i=0;i<n;i++)
{
if(k==a[i])
{
pos=i;
break;
}
}
if(pos>=0)
{
printf("The searching element is found,%d element is found at the location %d:\n",k,pos);
}
else
{
printf("The Searching element is not found\n");
}
getch();
}

