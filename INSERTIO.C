#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],i,j,n,temp;
clrscr();
printf("Enter the number of element:\n",n);
scanf("%d",&n);
printf("Enter the elements for an array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=1;i<n;i++)
{
temp=arr[i];
j=i-1;
while(j>=0 && arr[j]>temp)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=temp;
}
printf("Sorted array in assending order:\n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");
getch();
}