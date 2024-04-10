#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,arr[10];
clrscr();
printf("enter the number of element of n");
scanf("%d",&n);
printf("Enter the element for an array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("the elements of an array are:\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
printf("\n");
}
getch();
}