#include<stdio.h>
void swap9int*a,int*b)
{
int temp=*a;
*a=*b;
*b=temp;
}
int partition(int arr[],int low,int high)
{
int pivot=arr[high];
int i=(low-1);
for(int j=low;j<=high-1;j++)
{
if(arr[j]<pivot)
{
i++;
swap(arr[i],&arr[j]);