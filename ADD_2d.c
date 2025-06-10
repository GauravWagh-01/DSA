#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    int add = 0;
    for (int i = 0; i < 3; i++) // row value
    {
        for (int j = 0; j < 3; j++)
        {
            add = add + a[i][j];
            printf("%d ", add);
        }
        printf("\n");
    }
}