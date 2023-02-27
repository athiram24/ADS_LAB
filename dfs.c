#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define max 10
void DFS(int graph[max][max],int start,int vertexcount)
{
bool visited[vertexcount];
for(int i=0;i<vertexcount;i++)
{
visited[i] = false;
}
int stack[vertexcount];
int top=-1;
stack[++top]= start;
visited[start] = true;
while(top>=0)//while stack is not empty
{
int current = stack[top--];
printf("%d\t",current);
//for(int i =vertexcount-1;i>=0;i--)

for(int i=0;i<vertexcount;i++)
{
if(graph[current][i]&&!visited[i])
{
stack[++top] = i;
visited[i] = true;
}
}
}
}
void main()
{
int start,vertexcount,i,j;
int graph[max][max];
printf("Enter the start vertex:\n");
scanf("%d",&start);
printf("Enter the vertexcount:\n");
scanf("%d",&vertexcount);
printf("Enter the adjacency matrix:");
for(i=0;i<vertexcount;i++)
{
for(j=0;j<vertexcount;j++)
{
scanf("%d",&graph[i][j]);
}
}
if(vertexcount>0)
{
printf("Graph elements are:");
DFS(graph,start,vertexcount);
}
else
{
printf("Graph is empty:\n");
}
}

