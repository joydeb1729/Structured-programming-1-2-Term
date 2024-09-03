#include <stdio.h>

struct node {
    int nodeId;
    int cost;
    struct node *link;
};

struct node nodes[100];
int nodeCount=0;
//my                   
int last;
int source=1,destination=7;

void addNode(int nodeId)
{
    int i=0;

    for(i=0; i<nodeCount; i++)
    {
        if(nodes[i].nodeId==nodeId)
        return;
    }
    nodes[i].nodeId=nodeId; // Here i==nodeCount
    nodes[i].link=NULL;
    nodeCount++;
}

void addLink(int nodeId, int linkId, int linkCost)
{
    int i=0;
    for(i=0; i<nodeCount; i++)
    {
        if(nodes[i].nodeId==nodeId)
        break;
    }
    struct node *newLink = (struct node *)malloc(sizeof(struct node));
    newLink->nodeId=linkId;
    newLink->cost=linkCost;
    newLink->link=NULL;
    if(nodes[i].link==NULL)
    {
        nodes[i].link=newLink;
    }
    else
    {
        struct node *ptr =nodes[i].link;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }

        ptr->link=newLink;
    }
}

void search(int *path, int count)
{
    int currentNode = path[count-1];
    int i;

    if(currentNode==destination)
    {
        printf("\n");
        i=0;

        for(i=0; i<count; i++)
        {
            printf("%d ", path[i]);
        }
    }

    for(i=0; i<nodeCount; i++)
    {
        if(nodes[i].nodeId==currentNode)
        break;
    }

    struct node *ptr = nodes[i].link;

    while(ptr!=NULL)
    {
        int possibleId=ptr->nodeId;
        if(isPresent(path,count,possibleId)==0)
        {
            path[count]=possibleId;
            count++;
            search(path,count);
            count--;
        }
        ptr=ptr->link;
    }
    //my
    //last=count;
}
    
int isPresent(int * path, int count, int nodeId)
{
    int i;
    for(i=0; i<count; i++)
    {
        if(path[i]==nodeId)
        return 1;
    }
    return 0;
}

int main()
{
    int a, b, c;
    while(1) {
        scanf("%d%d%d",&a,&b,&c);

        if(a==0&&b==0&&c==0)
        break;

        addNode(a);
        addNode(b);
        addLink(a,b,c);
        addLink(b,a,c);
    }
    
    int path[100];
    path[0]=source;
    search(path,source);
    //my
    // int i;
    // printf("\n");
    // for(i=0; i<=10; i++)
    // {
    //     printf("%d ",path[i]);
    // }

    return 0;
}