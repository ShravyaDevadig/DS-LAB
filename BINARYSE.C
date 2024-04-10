#include<stdio.h>
void main()
{
int i,beg,end,mid,n,item,a[100];
clrscr();
printf("Enter the no. of elements\n");
scanf("%d",&n);
printf("Enter %d numbers:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the element to be searched:\n");
scanf("%d",&item);
beg=0;
end=n-1;
mid=(beg+end)/2;
while(beg<=end)
{
if(a[mid]<item)
beg=mid+1;
else if(a[mid]==item)
{
printf("Search is successful.Item %d found at location %d\n",item,mid+1);
break;
}
else
end=mid-1;
mid=(beg+end)/2;
}
if(beg>end)
printf("Search is unsuccessful and item %d is not found\n",item);
getch();
}