#include <stdio.h>
void main()
{
    int i[50];
    for (int z = 0; z < 50; z++)
    {
        i[z] = z + 1;
    }
    for (int z = 0; z < 50; z++)
    {
        printf("\n %d", i[z]);
    }
}