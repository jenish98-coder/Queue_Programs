#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int Enqueue();
int Dequeue();
void Peek();
void Display();
int front =-1, rear=-1;
int Q[MAX];
int main()
{
int option;
while(1)
{
printf("\nEnter your choice: ");
scanf("%d",&option);
switch(option)
{
case 1:
Enqueue();
break;
case 2:
Dequeue();
break;
case 3:
Peek();
break;
case 4:
Display();
break;
case 5:
exit(1);
break;
default:
printf("Enter option in the range 1 to 5");
break;
}
}
}
int Enqueue()
{
int data;
printf("Enter the value to be inserted into queue: ");
scanf("%d",&data);
if(rear==MAX-1)
{
printf("Overflow!!");
return 0;
}
else if(front==-1 && rear==-1)
{
front=0;
rear=0;
}
else
{
rear++;
}
Q[rear]=data;
}
int Dequeue()
{
int data;
if(front ==-1 && rear==-1)
{
printf("Underflow");
return 0;
}
else if(front==rear)
{
data=Q[front];
front=-1 ;
rear=-1;
}
else
{
data=Q[front];
front++;
}
printf("Value deleted: %d",data);
}
void Peek()
{
int data;
if(front==-1 && rear==-1)
{
printf("Underflow");
}
else
{
printf("Data at front: %d \n",Q[front]);
printf("Data at rear: %d \n",Q[rear]);
}
}
void Display()
{
if(front==-1 && rear==-1)
{
printf("Underflow");
}
else
{
printf("Q data: ");
for(int i=front; i<=rear;i++)
{
printf(" %d \t",Q[i]);
}
}
}
