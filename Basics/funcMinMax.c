#include <stdio.h>
int min(int arr[])
{
    int m = arr[0];
    for (int z = 0; z < 5; z++)
    {
        if (arr[z] < m)
        {
            m = arr[z];
        }
    }
    return m;
}

int max(int arr[])
{
    int m = arr[0];
    for (int z = 0; z < 5; z++)
    {
        if (arr[z] > m)
        {
            m = arr[z];
        }
    }
    return m;
}

void main()
{
    int arr[5] = {4, 6, 7, 8, 3};
    int mini = min(arr);
    int maxi = max(arr);
    printf("Minimum:- %d \nMaximum:- %d", mini, maxi);

}