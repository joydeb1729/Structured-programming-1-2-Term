#include <stdio.h>

int graph[100][100] = {0};
int indices[100];
int indcount = 0;

int startnode, endnode;

int getindex(int node)
{
    int i = 0;
    for (i = 0; i < indcount; i++)
    {
        if (indices[i] == node)
        {
            return i;
        }
    }
    indices[indcount] = node;
    indcount++;
    return indcount - 1;
}

int ispresentinpath(int *path, int count, int ind)
{
    int i = 0;
    for (i = 0; i < count; i++)
    {
        if (path[i] == ind)
        {
            return 1;
        }
    }
    return 0;
}

void printpath(int *path, int count)
{
    int i = 0;
    printf("\n");
    for (i = 0; i < count; i++)
    {
        printf(" %d ", indices[path[i]]);
    }
}

void search(int *path, int count)
{
    // current node = path[count-1];
    int cind = path[count - 1];
    // printf ("\nstart = %d", indices[cind]);
    int i = 0;
    for (i = 0; i < indcount; i++)
    {
        if (graph[cind][i] > 0)
        {
            if (ispresentinpath(path, count, i) == 0)
            {
                path[count] = i;
                count++;
                if (i == endnode)
                {
                    printpath(path, count);
                }                                       
                search(path, count);
                count--;
            }
        }
    }
    // printf ("\ncannot go.");
}

int main()
{
    // Write C code here
    int a, b, c;
    while (1)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }

        int i1 = getindex(a);
        int i2 = getindex(b);

        graph[i1][i2] = c;
        graph[i2][i1] = c;
    }

    int s, e;
    printf("input start: ");
    scanf("%d", &s);
    printf("input end: ");
    scanf("%d", &e);

    int path[100], count = 0;

    path[0] = getindex(s);
    count++;
    endnode = getindex(e);

    search(path, count);

    return 0;
}