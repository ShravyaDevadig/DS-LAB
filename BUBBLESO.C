#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,temp,arr[10];
clrscr();
printf("Enter the number of element:");
scanf("%d",&n);
printf("Enter %d integer values:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
//sort the array in ascending order using bubble sort
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
//swap arr[j] and arr[j+1]
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("Sorted array in ascending order:");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
printf("\n");
getch();
}