#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void enque(int []);
void deque(int []);
void display(int []);
int front,rear;

void main()
{
int a[MAX];
int choice;
while(choice!=4)
{
printf("\n-----------------MENU--------------");
printf("\n1.ENQUE \n2.DEQUE \n3.DISPLAY \n4.EXIT");
printf("ENTER YOUR CHOICE:");
scanf("%d",&choice);
switch(choice)
{
case 1:enque(a);
	break;
case 2:deque(a);
	break;
case 3:display(a);
	break;
case 4:exit(0);
default:
printf("INVALID CHOICE");
}
}
}
void enque(int a[])
{
int ele;
if(rear==MAX-1)
{
printf("QUEUE OVERFLOW");
}
else 
{
if(front==1 && rear==-1)
front=rear=0;
printf("\n ENTER ELEMENT:");
scanf("%d",&ele);
a[rear]=ele;
rear++;
printf("\n ELEMENT INSERTED");
}
}
void deque(int a[])
{
if(front==-1 || front>rear)
{
printf("QUEUE UNDERFLOW");
}
else 
{
printf("\n ELEMENT %d DELETED",a[front]);
front++;
}
}
void display(int a[])
{
int i;
if(front==-1 || front>rear)
{
printf("QUEUE UNDERFLOW");
}
else 
{
printf("\n ELEMENTS OF QUEUE ARE:");
for(i=front;i<=rear;i++)
{
printf("\t %d",a[i]);
}
}
}

