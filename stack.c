#include<stdio.h>
#define n 5
void Push();
void Pop();
void Top();
void Display();
int stack[n];
int top=-1;
void main()
{
int c;
do
{
printf("Enter the choice:\n 1.Push \n 2.Pop \n 3.Top value \n 4.Display ");
scanf("%d",&c);
switch(c)
{
case 1: Push();
        break;
case 2: Pop();
        break;
case 3: Top();
        break;
case 4: Display();
        break;
default: printf("Invalid Choice:\n");
}
}while(c!=0);
}
void Push()
{
int x;
printf("Enter the item to be inserted:\n");
scanf("%d",&x);
if(top==n-1)
{
printf("Stack Overflow:\n");
}
else 
{
top++;
stack[top]=x;
}
}
void Pop()
{
int item;
if (top==-1)
{
printf("Underflow");
}
else 
{
item = stack[top];
top--;
printf("\nDeleted item %d\n",item);
}
}
void Top()
{
if(top==-1)
{
printf("\nStack is empty:\n");
}
else
{
printf("Top Value = %d\n",stack[top]);
}
}
void Display()
{
for(int i=top;i>=0;i--)
{
printf("\n%d\n",stack[i]);
}
}





