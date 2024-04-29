#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node*link;
};
struct node*top=NULL;
void push()
{
struct node*ptr;
ptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the Elements to be inserted to the stack:");
scanf("%d",&ptr->data);
ptr->link=NULL;
if(top==NULL)
top=ptr;
else
{
ptr->link=top;
top=ptr;
}
}
void pop()
{
struct node*temp;
if(top==NULL)
{
printf("\nStack is Empty....\n");
return;
}
else
{
temp=top;
printf("\n item tobe deleted:%d",temp->data);
top=top->link;
free(temp);
}
}
void show()
{
struct node*temp;
if(top==NULL)
{
printf("\n Stack is Empty....\n");
}
else
{
printf("\nElement of stack:");
temp=top;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->link;
}
printf("NULL");
}
}
void main()
{
int ch;
clrscr();
do
{
printf("*****MENU*****");
printf("\n1.Push");
printf("\n2.Pop");
printf("\n3.Show");
printf("\n4.Exit");
printf("\n Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:show();
break;
case 4:printf("\n Exit");
break;
default:printf("\n invalid choice");
break;
}
}
while(ch!=4);
getch();
}


