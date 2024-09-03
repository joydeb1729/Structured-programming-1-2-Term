#include <stdio.h>
#include <stdlib.h>

struct node
{
    int nodeid;
    int cost;
    struct node * link;
};


struct node nodes[100];
int nodecount = 0;
int source = 0, destination = 0;

//add a node in the list.
void addnode (int nodeid)
{
    int i=0;
    for (i=0;i<nodecount;i++)
    {
        if (nodes[i].nodeid == nodeid) {return;}
    }

    nodes[nodecount].nodeid = nodeid;
    nodes[i].link = NULL;
    nodecount++;
}


//nodeid is a node in the node list. linkid is a node which is linked with nodeid.
void addlink (int nodeid, int linkid, int linkcost)
{
    int i=0;
    for (i=0;i<nodecount;i++)
    {
        if (nodes[i].nodeid == nodeid) {break;}
    }

    struct node * l;
    l = (struct node *) malloc (sizeof (struct node));
    l->nodeid = linkid;
    l->cost = linkcost;
    l->link = NULL;

    if (nodes[i].link == NULL) { nodes[i].link = l; }
    else
    {
        struct node * p = nodes[i].link;
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = l;
    }
}

//whether nodeid is included in the path.
int isinpath (int * path, int count, int nodeid)
{
    int i = 0;
    for (i=0;i<count;i++)
    {
        if (path[i] == nodeid) { return 1; }
    }
    return 0;
}

//recursively go to all the possible way from the last node of the path.
void search (int * path, int count)
{
    int cnode = path[count-1];


    if (cnode == destination)
    {
        printf ("\n");
        int j =0;
        for (j=0;j<count;j++) { printf(" %d ", path[j]); }
        return;
    }


    int i =0;
    for (i=0;i<nodecount;i++)
    {
        if (nodes[i].nodeid == cnode) {break;}
    }

    struct node * p = nodes[i].link;

    while (p != NULL)
    {
        int possibleid = p->nodeid;

        if (isinpath(path, count, possibleid) == 0)
        {
            path[count] = possibleid;
            count++;
            search (path, count);
            count--;
        }

        p = p->link;
    }

}


void main (void)
{
    //freopen ("input.txt", "r", stdin);
    int a, b, c;
    while (1)
    {
        scanf ("%d%d%d", &a, &b, &c);

        if (a == 0 && b==0 && c==0) {break;}

        addnode (a);
        addnode (b);
        addlink (a, b, c);
        addlink (b, a, c);
    }

    scanf ("%d%d", &source, &destination);
    int path[100];
    path[0] = source;

    search (path, 1);

    printf ("\ntest");
}