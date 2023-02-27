
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define max 6

void BFS(int graph,int start,int vertexcount)
{
//int graph[max][max];
//int start,vertexcount,current,i;
int q[vertexcount];
int front =-1,rear=-1;
bool visited[vertexcount];
int current,i;
for( i=0;i<vertexcount;i++)
{
visited[i]=false;
}
q[++rear]=start;//enqueuing first vertex
front++;
while(front<=rear)
{
 current = q[front++];//dequeue
printf("%d\t",current);
for( i=vertexcount-1;i>=0;i--)
{
if(graph[current][i] && !visited[i])///y errorrrrr
{
q[++rear] = i;
visited[i]=true;
}
}
}
}
void main()
{
int i ,j,vertexcount,start;
int graph[max][max];
printf("Enter the number of vertices:");
scanf("%d",&vertexcount);
if(vertexcount>0)
{
printf("enter the adjacency matrix:");
for( i=0;i<vertexcount;i++)
{
for(j=0;j<vertexcount;j++)
{
scanf("%d",&graph[i][j]);
}
}
printf("Enter the start vertex:");
scanf("%d",&start);
printf("Graph elements are:");
BFS(graph[max][max],start,vertexcount);
}
else
{
printf("Graph is empty please enter a valid number as number of vertices:");
}
}




