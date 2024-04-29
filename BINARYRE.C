#include<stdio.h>
#include<conio.h>
int BinarySearch(int arr[],int item,int beg,int end)
{while(beg<=end)
{
int mid=(beg+end)/2;
if(arr[mid]==item)
{
return mid;
}
if(arr[mid]>item)
{
return BinarySearch(arr,item,beg,mid-1);
}
return BinarySearch(arr,item,mid+1,end);
}
return -1;
}
void main()
{
int n,a[10],item,i,result;
clrscr();
printf("Enter the number of Element:");
scanf("%d",&n);
printf("The Elements are:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the elements to be searched:");
scanf("%d",&item);
result=BinarySearch(a,item,0,n-1);
if(result==-1)
printf("Search is Unsuccessful.Item %d is not found \n",item,result+1);
else
printf("Search is successful.Item %d is found at location %d\n",item,result+1);
getch();
}