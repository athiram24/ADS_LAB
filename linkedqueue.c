#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct node*FRONT,*REAR,*temp,*newnode,*ptr=NULL;
int item;
void enqueue();
void dequeue();
void topvalue();
void display();
void main()
{
int c;
do
{
printf("\nEnter the choice:\n 1.Enqueue\n 2.Dequeue\n 3.Topvalue\n 4.Display\n");
scanf("%d",&c);
switch(c)
{
case 1:enqueue();
       break;
case 2:dequeue();
       break;
case 3:topvalue();
       break;
case 4:display();
        break;
default:printf("Wrong choice:\n");
}
}while(c!=0);
}
void enqueue()
{
printf("Enter the data to be inserted:\n");
scanf("%d",&item);    
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=item;
newnode->next=NULL;
if(REAR==NULL)
{
FRONT=newnode;
REAR=newnode;
}
else
{
REAR->next=newnode;
REAR=newnode;
}
}
void dequeue()
{
ptr=(struct node*)malloc(sizeof(struct node));
temp=(struct node*)malloc(sizeof(struct node));
temp=FRONT;
ptr=FRONT;
if(temp==NULL)
{
printf("QUeue is empty:\n");
}
else
{

FRONT=FRONT->next;
printf("Removed item:%d\n",ptr->data);
free(ptr); 
}
}
void topvalue()
{
temp=(struct node*)malloc(sizeof(struct node));
temp=FRONT;
if(temp==NULL)
{
printf("Linked list is empty:");
}
else
{
printf("Top value:%d\n",temp->data);
}
}
void display()
{
temp=(struct node*)malloc(sizeof(struct node));
temp=FRONT;
if(temp==NULL)
{
printf("Linked list is empty:");
}
else
{
while(temp!=NULL)
{
printf("%d\t->",temp->data);
temp=temp->next;
}
printf("NULL");
}
}


