#include<stdio.h>
#include<stdlib.h>

struct node {
    int id;
    int cost;
    struct node *link;
};
struct node nodes[100];
int nodeCount=0;

void addNode(int id)
{
    int i;
    for(i=0; i<nodeCount; i++)
    {
        if(nodes[i].id==id)
        return;
    }
    nodes[nodeCount].id=id;
    nodes[nodeCount].link=NULL;
    nodeCount++;
    return;
}

void linkNode(int id, int neighbor, int cost)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->id=neighbor;
    newNode->cost=cost;
    newNode->link=NULL;

    int i;
    for(i=0; i<nodeCount; i++)
    {
        if(nodes[i].id==id)
        break;
    }   
    if(nodes[i].link==NULL)
    {
        nodes[i].link=newNode;
    }
    else
    {
        struct node *ptr =nodes[i].link;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=newNode;
    }
}
int isInPath(int *path, int length, int id)
{
    int i;
    for(i=0; i<length; i++)
    {
        if(path[i]==id)
        return 1;
    }
    return 0;
}
void search(int *path,  int length, int destination)
{
    int currentNode=path[length-1];
    int i;
    if(currentNode==destination)
    {
        printf("\n[ A Possible Path: ");
        for(i=0; i<length; i++)
        {
            printf("%d ", path[i]);
        }
        printf("]\n\n");
        return;
    }
    for(i=0; i<nodeCount; i++)
    {
        if(nodes[i].id==currentNode)
        break;
    }
    struct node *ptr=nodes[i].link;
    while(ptr!=NULL)
    {
        int possibleId=ptr->id;
        if(!isInPath(path,length,possibleId))
        {
            path[length]=possibleId;
            printf("New node in the path : %d\n",possibleId);
            search(path,length+1,destination);
            printf("Going back in path from %d to %d\n",path[length], path[length-1]);
        }
        ptr=ptr->link;
    }
}

int main()
{
    int i, a, b, c, source, destination;

    for(i=0;; i++)
    {
        scanf("%d%d%d", &a, &b, &c);

        if(a==0 && b==0 && c==0)
        break;

        addNode(a);
        addNode(b);
        linkNode(a,b,c);
        linkNode(b,a,c);
    }
    scanf("%d", &source);
    scanf("%d",&destination);
    int path[100];
    path[0]=source;
    printf("Starting traversal from: %d\n",source);
    search(path,1,destination);
}