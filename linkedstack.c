#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct node*top,*newnode,*temp=NULL;
void push();
void pop();
void topvalue();
void display();
void main()
{
int c;
do
{
printf("\nEnter the choice:\n1.Push \n2.Pop \n3.Top \n4.Display\n");
scanf("%d",&c);
switch(c)
{
case 1:push();
	break;
case 2:pop();
	break;
case 3:topvalue();
	break;
case 4:display();
	break;
default:printf("Wrong choice:\n");
}
}while(c!=0);
}
void push()
{
int item;
printf("Enter the value to be inserted:\n");
scanf("%d",&item);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=item;
newnode->next=NULL;
if(top==NULL)
{
top=newnode;
}
else
{
newnode->next=top;
top=newnode;
}
display();
}
void pop()
{
if(top==NULL)
{
printf("Linked stack is empty:\n");
}
else
{
temp=top;
top=top->next;
printf("Removed item:%d\n",temp->data);
}
display();
}
void topvalue()
{
if(top==NULL)
{
printf("Linked stack is empty:\n");
}
else
{
printf("Top value of linked stack is:%d\n",top->data);
}
}
void display()
{
if(top==NULL)
{
printf("linked stack is empty:\n");
}
else
{
printf("Linked stack is:\n");
for(temp=top;temp!=NULL;temp=temp->next)
{
printf("%d\t->",temp->data);
}
printf("NULL");
}
}







