#include <stdio.h>
void main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // printing array
    printf("2D Array\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n-------------------------\n");

    // Addition of All
    int add1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 1; j++)
        {
            add1 = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
        }
    }
    printf("Addition of All: -%d\n", add1);

    printf("\n-------------------------\n");

    // Addition of ROWS
    int add2[3];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        add2[i] = sum;
    }
    printf("Addition of ROWS: -\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Row %d: - %d\n", i + 1, add2[i]);
    }

    printf("\n-------------------------\n");

    // Addition of COLUMBS
    int add3[3];
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
        add3[i] = sum;
    }
    printf("Addition of COLS: -\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Cols %d: - %d\n", i + 1, add3[i]);
    }

    printf("\n-------------------------\n");

    // Min Max
    int min = 0, max = 0;
    min = arr[2][2];
    max = arr[2][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    printf("Minimum and Maximum: -\nMin: - %d \nMax: - %d", min, max);

    printf("\n-------------------------\n");
}