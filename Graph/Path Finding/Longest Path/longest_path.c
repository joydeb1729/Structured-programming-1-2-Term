#include<stdio.h>
#include<stdlib.h>

struct node {

    int nodeId;
    int cost;
    struct node *link;
};

struct node nodes[100];
int nodeCount=0;
int source=0, destination=0;
int possiblePath[10][10];
int pathCount=0;


void addNode(int id)
{
    for(int i=0; i<nodeCount; i++)
    {
        if(nodes[i].nodeId==id)
        return;
    }
    nodes[nodeCount].nodeId=id;
    nodes[nodeCount].link=NULL;
    nodeCount++;
}
void addLink(int id, int linkId, int cost)
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->nodeId=linkId;
    newNode->cost=cost;
    newNode->link=NULL;

    int i;
    for(i=0; i<nodeCount; i++)
    {
        if(nodes[i].nodeId==id)
        break;
    }
    if(nodes[i].link==NULL)
    {
        nodes[i].link=newNode;
        return;
    }
    struct node *ptr=nodes[i].link;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=newNode;
}

int isInPath(int *path, int length, int id)
{
    for(int i=0; i<length; i++)
    {
        if(path[i]==id)
        return 1;
    }
    return 0;
}

void StorePath(int *path, int length)
{
    int i, j;
    for(i=0; i<length; i++)
    {
        possiblePath[pathCount][i]=path[i];
    }
    possiblePath[pathCount][length]=-1;
    pathCount++;
}

void search(int *path, int length)
{
    int i;
    int currentNode = path[length-1];
    if(currentNode==destination)
    {
        StorePath(path,length);
        return;
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
        if(isInPath(path,length,possibleId)==0)
        {
            path[length]=possibleId;
            length++;
            
            search(path,length);
            length--;
        }
        ptr=ptr->link;
    }

}

int main()
{
    int a,b,c,i, j;

    for(i=0; ; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==0 && b==0 && c==0)
        break;

        addNode(a);
        addNode(b);
        addLink(a,b,c);
        addLink(b,a,c);
    }
    scanf("%d%d", &source,&destination);

    int path[100];
    path[0]=source;

    search(path,1);

    int maxPath=-1;
    int minPath=__INT_MAX__;
    int temp=0;
    int maxInd=-1;
    int minInd=-1;

    for(i=0; i<pathCount; i++)
    {
        temp=0;
        for(j=0; possiblePath[i][j]!=-1; j++)
        {
            printf("%d ", possiblePath[i][j]);
        }
        printf("\n");
    }

    // for(i=0; i<pathCount; i++)
    // {
    //     temp=0;
    //     for(j=0; possiblePath[i][j]!=-1; j++){temp++;}
    //     if(temp>=maxPath){maxPath=temp,maxInd=i;}
    //     if(temp<=minPath){minPath=temp,minInd=i;}
    // }

    printf("Maximum length path: ");
    for(i=0; possiblePath[maxInd][i]!=-1; i++)
    {
        printf("%d ",possiblePath[maxInd][i]);
    }
    printf("Minimum length path: ");
    for(i=0; possiblePath[minInd][i]!=-1; i++)
    {
        printf("%d ",possiblePath[minInd][i]);
    }


    return 0;
}