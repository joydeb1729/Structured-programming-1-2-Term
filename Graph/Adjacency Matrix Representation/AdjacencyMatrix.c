#include <stdio.h>
int graph[100][100] = {0};
int _index[110] = {0};

int find_index(int num)
{
    int j = -1, i;
    for (i = 0; i < 110; i++)
    {
        if (_index[i] == num)
        {
            j = i;
            break;
        }
    }
    return j;
}

void printMatrix(int count)
{
    int i, j, length = 0;
    int flag = 0;
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 100; j++)
        {
            if (count > length && graph[i][j] > 0)
            {
                printf("%d ", graph[i][j]);
                length++;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
}

int main()
{

    int i = 0, j = 0, x, y, n, k = 0, count = 0;

    while (1)
    {
        scanf("%d%d%d", &x, &y, &n);

        if (x == 0 && y == 0 && n == 0)
            break;

        int x1 = find_index(x);
        int y1 = find_index(y);

        if (x1 == -1 && y1 == -1)
        {
            graph[i][j] = n;
            i++;
            j++;
            _index[k++] = x;
            _index[k++] = y;
        }
        else if (x1 == -1)
        {
            y1--;
            graph[i][y1] = n;
            i++;
            _index[k++] = x;
        }
        else if (y1 == -1)
        {
            x1--;
            graph[x1][j] = n;
            j++;
            _index[k++] = y;
        }

        count++;
    }

    printMatrix(count);

    return 0;
}