#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*prev;
struct node*next;
};
struct node*newnode,*current,*head,*nptr,*ptr,*temp,*preptr,*tail=NULL;
void Create();
void InsertBeg();
void InsertMid();
void InsertEnd();
void DeleteBeg();
void DeleteMid();
void DeleteEnd();
void Display();
void Traverse();
void Search();
int i,n,item,data;
void main()
{
int c;
do
{
printf("\nEnter the choice:\n 1.Creation\n 2.Insertion at beginning\n 3.Insertion between nodes\n 4.Insertion at end\n 5.Deletion at beginning\n 6.Deletion after a node\n 7.Deletion at end\n 8.Traverse and count\n 9.Search\n 10.Display linked list\n ");
scanf("%d",&c);
switch(c)
{
case 1:Create();
       break;
case 2:InsertBeg();
       break;
case 3:InsertMid();
      break;
case 4:InsertEnd();
       break;
case 5:DeleteBeg();
       break;
case 6:DeleteMid();
       break;
case 7:DeleteEnd();
       break;
case 8:Traverse();
       break;
case 9:Search();
       break;
case 10:Display();
       break;
default:printf("Please enter the value between 1 and 11:\n");
}
}while(c!=0);
}
void Create()
{
printf("Enter the no of nodes in the linked list:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the value:");
newnode=(struct node*)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
newnode->next=NULL;
newnode->prev=NULL;

if(head==NULL)
{

current=newnode;
newnode->next=NULL;
newnode->prev=NULL;
head=newnode;
}
else
{
current->next=newnode;
newnode->prev=current;
current=newnode;
newnode->next=NULL;
}
}
}
void Display()
{
printf("\nLinked list\n");
 for(current=head;current!=NULL;current=current->next)
 {
  printf("\t<-%d->\t",current->data);
 } 
printf("Null\n");
}


void Traverse()
{

int q=0;
nptr=head;
while(nptr!=NULL)
{
nptr=nptr->next;
q++;
}
printf("Count=%d\n",q);
}  

void Search()
{ 

  int k=0,item,flag=0;
  printf("Enter the item to be searched:\n");
  scanf("%d",&item);
  ptr=head;
  while(ptr!=NULL)
  { 
   if(ptr->data==item)
       {
	printf("item found at %d\n",k+1);
	flag=0;
	break;
       }
    else
       {
	flag=1;
       }
   k=k+1;
   ptr=ptr->next;

  } 
 if(flag==1)
 {
  printf("Item not found:\n");
}
}

void InsertBeg()
{
printf("Enter the value to be inserted:\n");
newnode=(struct node*)malloc(sizeof(struct node));
scanf("%d",&newnode->data);

if(head==NULL)
{
	newnode->prev=NULL;
	newnode->next=NULL;
	head=newnode;
}
else
{
	newnode->next=head;
        newnode->prev=NULL;
        head=newnode;

}
Display();
}
void InsertMid()
{ 
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("Enter the data to be inserted\n");
 scanf("%d",& newnode->data);
 newnode->next=NULL;
 newnode->prev=NULL;
 printf("Enter the data of the node for finding location of newnode:\n");
 scanf("%d",&item);
 ptr=head;
 while(ptr->data!=item)
  {
    ptr=ptr->next;
  } 

   
   newnode->prev=ptr;
   newnode->next=ptr->next;
   ptr->next=newnode;
   ptr->next->prev=newnode;
   Display();
  
}

void InsertEnd()
{ 
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("Enter the data to be inserted:\n");
 scanf("%d",&newnode->data);
 newnode->prev=NULL;
 newnode->next=NULL;
 ptr=head;
 while(ptr->next!=NULL)
  {
  ptr=ptr->next;
  }
 ptr->next=newnode;
 newnode->prev=ptr;
 newnode->next=NULL;
 Display();
}
  
void DeleteBeg()
{  
 if(head==NULL)
  {
   printf("Underflow:\n");
  } 
 else 
  {
  ptr=head;
  head=head->next;
  printf("Removed data:%d\n",ptr->data);
  free (ptr);
  Display();
 }
}
void DeleteMid()
 { 
    if(head==NULL)
  {
    printf("Underflow:\n");
  }  
 else
 { 
 printf("Enter the data of the node after which the node has to be deleted:\n");
 scanf("%d",&item);
 ptr=head;
 while(ptr->data!=item)
   {  
  ptr=ptr->next;
   }
preptr=ptr->next;
ptr->next=preptr->next;
 printf("Removed item:%d",preptr->data);
 free (preptr);
 Display();
 }
}
void DeleteEnd()
{
	if(head==NULL)
  	{
  		printf("Underflow:\n");
  	}  
	else
	{
		ptr=head;
 		while(ptr->next!=NULL)
 		{  
                        preptr=ptr;
  			ptr=ptr->next;
  		}
                preptr->next=NULL;
		printf("Removed item:%d",ptr->data);

		free(ptr);
                Display();
	}
}


 
 


  
 

 
 











