#include<stdio.h>
#include<stdlib.h>
#define MAX1 3
#define MAX2 3
int Enqueue();
int Dequeue();
void Peek();
void Display();
int F[MAX1];
int R[MAX1];
int p=0;
int Q[MAX1][MAX2];
void assign()
{
for(int i=0;i<=MAX1-1;i++)
{
F[i]=-1;
R[i]=-1;
}
}
int main()
{
assign();
int option;
while(1)
{
printf("\nEnter your choice: ");
scanf("%d",&option);
printf("Enter the priority: ");
scanf("%d",&p);
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
if(R[p]==MAX1-1)
{
printf("Overflow!!");
return 0;
}
else if(F[p]==-1 && R[p]==-1)
{
F[p]=0;
R[p]=0;
}
else
{
R[p]=R[p]+1;
}
int r=R[p];
Q[p][r]=data;
}
int Dequeue()
{
int data,f;
if(F[p] ==-1 && R[p]==-1)
{
printf("Underflow");
return 0;
}
else if(F[p]==R[p])
{
f=F[p];
data=Q[p][f];
F[p]=-1 ;
R[p]=-1;
}
else
{
int f=F[p];
data=Q[p][f];
F[p]=F[p]+1;
}
printf("Value deleted: %d",data);
}
void Peek()
{
int data, f=F[p];
if(F[p]==-1 && R[p]==-1)
{
printf("Underflow");
}
else
{
printf("Data at front: %d \n",Q[p][f]);
}
}
void Display()
{
if(F[p]==-1 && R[p]==-1)
{
printf("Underflow");
}
else
{
printf("Q data: ");
for(int i=F[p]; i<=R[p];i++)
{
printf(" %d \t",Q[p][i]);
}
}
}

