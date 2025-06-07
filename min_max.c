#include <stdio.h>
void main()
{
    int i[5] = {2, 5, 6, 12, 3};
    int max = 0, min = 0;
    for (int z = 0; z < 5; z++)
    {
        if (i[z] > max)
        {
            max = i[z];
        }
    }
    printf("\n Maximun :- %d", max);
    min = i[1];
    for (int z = 0; z < 5; z++)
    {
        if (i[z] < min)
        {
            min = i[z];
        }
    }
    printf("\n Minimun :- %d", min);
}