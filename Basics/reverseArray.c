#include <stdio.h>
void main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];

    for (int i = 4; i >= 0; i--)
    {
        // printf("%d", arr1[i]);
        // arr2[5 - i] = arr1[i];
        printf("%d ", arr1[i]);
    }
}